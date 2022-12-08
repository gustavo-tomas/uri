#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string _;
    cin >> t;
    getline(cin, _);
    while (t--) {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);

        for (int i = 0; i < s1.size(); i+=2) {
            cout << s1[i] << s1[i + 1];
            cout << s2[i];
            if (i + 1 < s2.size())
                cout << s2[i + 1];
        }
        cout << endl;
    }

    return 0;
}
