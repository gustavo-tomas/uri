#include <bits/stdc++.h>
using namespace std;

int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string w;
    while (cin >> w) {
        if (w.size() >= 10) cout << "palavrao\n";
        else cout << "palavrinha\n";
    }

    return 0;
}
