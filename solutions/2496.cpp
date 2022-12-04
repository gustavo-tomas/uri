#include <bits/stdc++.h>
using namespace std;

int main() {

    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int m, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        int count = 0;
        for (int j = 0; j < m; j++) {
            char letter;
            cin >> letter;
            if (letter != alphabet[j]) count++;
        }
        if (count <= 2) cout << "There are the chance.\n";
        else cout << "There aren't the chance.\n";
    }

    return 0;
}
