#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t;
    cin >> t;
    for (int c = 1; c <= t; c++) {

        int max_cap;
        int values[100], weights[100];

        cin >> n >> max_cap;
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

        int res = m[n][max_cap];

        cout << "Galho " << c << ":\n";
        cout << "Numero total de enfeites: " << res << "\n\n";
    }
    return 0;
}
