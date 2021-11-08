#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s, t = "XFD";
    while (cin >> s){
        if(s.size() > 3 || (s > t && s.size() == 3)){
            // cout << s << " " << t << endl;
            cout << "Essa coluna nao existe Tobias!" << endl;
        }
        else {
            for(int i=0; i<s.size(); i++) s[i] -= 64;
            if(s.size() == 1) cout << (int) s[0] << endl;
            if(s.size() == 2) cout << (int) (26 * s[0]) + s[1] << endl;
            if(s.size() == 3) cout << (int) (26 * 26 * s[0]) + (26 * s[1]) + s[2] << endl;
        }
    }
    
    return 0;
}
