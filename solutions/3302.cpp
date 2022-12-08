#include <bits/stdc++.h>
using namespace std;

int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, res;
    while (cin >> n) {
        for (int i = 1; i <= n; i++) {
            cin >> res;
            cout << "resposta " << i << ": " << res << "\n";
        }
    }

    return 0;
}
