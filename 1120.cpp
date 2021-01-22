#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    char digit;
    string s;
    
    while(cin >> digit >> s && (digit != '0' || s != "0")){
        int flag=0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == digit && s[i+1] != '0'){
                // nothing
            }
            else if(s[i] == digit && s[i+1] == '0'){
                while(s[i+1] == '0'){
                    i++;
                }
                // cout << s[i];
            }
            else {
                cout << s[i];
                flag = 1;
            }
        }
        if(!flag) cout << 0;
        cout << endl;
    }

    return 0;
}
