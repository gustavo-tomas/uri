#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    while (n--) {
        string str, substr;
        cin >> str >> q;
        while (q--) {
            int ok = 1;
            cin >> substr;
            size_t pos = 0;
            for (int i=0; i<substr.size() && ok; i++) {
                size_t found = str.find(substr[i], pos);
                cout << "POS: " << found << endl;
                if (found != string::npos)
                    pos = found + 1;
                else
                    ok = 0;
            }
            if (ok)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}
