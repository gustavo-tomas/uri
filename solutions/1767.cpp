#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t;
    cin >> t;
    while (t--) {

        int max_cap = 50;
        int values[100], weights[100];

        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> values[i] >> weights[i];

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

        int toys = m[n][max_cap], pkgs = 0, idx = max_cap, res = m[n][max_cap];

        for (int i = n; i > 0 && res > 0; i--) {
            if (res == m[i - 1][idx]) continue;
            else {
                res -= values[i];
                idx -= weights[i];
                pkgs++;
            }
        }
        cout << toys << " brinquedos\n";
        cout << "Peso: " << max_cap - idx << " kg\n";
        cout << "sobra(m) " << n - pkgs << " pacote(s)\n\n";
    }
    return 0;
}
