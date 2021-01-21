#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        if(s.size() == 3){
            if(s[0] == 'O' && s[1] == 'B') cout << "OBI";
            else if(s[0] == 'U' && s[1] == 'R') cout << "URI";
            else cout << s;
        } else {
            cout << s;
        }
        if(n >= 1) cout << " ";
        else cout << endl;
    }
    
    return 0;
}
