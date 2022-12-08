#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    while (cin >> n >> m && n > 0) {
        char mat[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];

        int a, b;
        cin >> a >> b;
        for (int i = 0; i < n; i++) {
            for (int l = 0; l < a / n; l++) {
                for (int j = 0; j < m; j++)
                    for (int k = 0; k < b / m; k++)
                        cout << mat[i][j];
                cout << "\n";
            }
        }
        cout << "\n";
    }

    return 0;
}
