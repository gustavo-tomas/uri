#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, max_cap, test = 1;
    while (cin >> max_cap >> n && n > 0) {

        int values[2000], weights[2000];

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
                    m[i][j] = max(m[i-1][j], m[i-1][j-weights[i]] + values[i]);
            }
        }

        int res = m[n][max_cap], count = 0;

        for (int i = n; i > 0; i--) {
            if (res == m[i - 1][max_cap]) continue;
            else {
                count += values[i];
                max_cap -= weights[i];
                res -= values[i];
            }
        }

        cout << "Teste " << test << "\n";  
        cout << count << "\n\n";
        test++;
    }
    return 0;
}
