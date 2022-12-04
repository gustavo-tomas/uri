#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int values[100], weights[100];
        int max_cap, res;
        for (int i = 1; i <= n; i++)
            cin >> values[i] >> weights[i];
        
        cin >> max_cap >> res;

        int m[n + 5][max_cap + 5];
        for (int j = 0; j <= max_cap; j++) m[0][j] = 0;
        for (int j = 1; j <= n; j++) m[j][0] = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= max_cap; j++) {
                if (weights[i] > j)
                    m[i][j] = m[i-1][j];
                else
                    m[i][j] = max(m[i-1][j], m[i-1][j-weights[i]] + values[i]);
            }
        }

        int dmg = m[n][max_cap];
        if (dmg >= res) cout << "Missao completada com sucesso\n";
        else cout << "Falha na missao\n";
    }
    return 0;
}
