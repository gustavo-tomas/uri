#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, max_cap, count = 1;
    while (cin >> n >> max_cap && n > 0) {

        int values[1001], weights[1001];

        for (int i = 1; i <= n; i++)
            cin >> weights[i] >> values[i];

        int m[n + 5][max_cap + 5];
        for (int j = 0; j <= max_cap; j++) m[0][j] = 0;
        for (int j = 1; j <= n; j++) m[j][0] = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= max_cap; j++) {
                if (weights[i] > j)
                    m[i][j] = m[i-1][j];
                else
                    m[i][j] = max(m[i-1][j], m[i][j-weights[i]] + values[i]);
            }
        }
        int res = m[n][max_cap];
        cout << "Instancia " << count++ << "\n";
        cout << res << "\n\n";
    }

    return 0;
}
