#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d, mat[523][123];
    while (cin >> n >> d && n > 0 && d > 0) {
        for (int i = 0; i < d; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mat[i][j];
            }
        }
        int yes = 0;
        for (int j = 0; j < n && !yes; j++) {
            yes = 1;
            for (int i = 0; i < d && yes; i++) {
                if (mat[i][j] != 1) {
                    yes = 0;
                }
            }
        }
        if (yes) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}