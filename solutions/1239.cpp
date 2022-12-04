#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    while (getline(cin, s)) {
        string res = "";
        int open_i = 0, open_b = 0;
        for (auto c : s) {
            if (c == '_') {
                open_i = !open_i;

                if (open_i)
                    res += "<i>";
                else
                    res += "</i>";
            }

            else if (c == '*') {
                open_b = !open_b;

                if (open_b)
                    res += "<b>";
                else
                    res += "</b>";
            }

            else
                res += c;
        }
        cout << res << endl;
    }

    return 0;
}
