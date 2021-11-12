#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    for (int k = 1; k <= n; k++) {
        int mat[9][9];
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cin >> mat[i][j];
            }
        }

        int ok = 1;
        for (int i = 0; i < 9 && ok; i++) {
            set<int> line, column;
            for (int j = 0; j < 9 && ok; j++) {
                if (line.count(mat[i][j]) || column.count(mat[j][i])) {
                    ok = 0;
                }
                else {
                    line.insert(mat[i][j]);
                    column.insert(mat[j][i]);
                }
                if (i == j && (i+1) % 3 == 0) {
                    set<int> block;
                    for (int t = i; t > i-3 && ok; t--) {
                        for (int u = j; u > j-3 && ok; u--) {
                            block.insert(mat[t][u]);
                        }
                    }
                    if (block.size() < 9) {
                        ok = 0;
                    }
                }
            }
        }
        
        cout << "Instancia " << k << endl;
        if (ok) cout << "SIM\n" << endl;
        else cout << "NAO\n" << endl;
    }
    return 0;
}
