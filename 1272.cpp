#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    string s;
    getline(cin, s);
    while(n--){
        getline(cin, s);
        
        int flag = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z' && !flag){
                cout << s[i];
                flag = 1;
            }
            if(s[i] == ' ') flag = 0;
        }
        cout << endl;
    }

    return 0;
}
