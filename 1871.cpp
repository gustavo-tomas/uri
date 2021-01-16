#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    while(cin >> n >> m && (n || m)){
        int res = n + m;
        string s = to_string(res);
        for(int i=0; i<s.size(); i++){
            if(s[i] != '0') cout << s[i];
        }
        cout << endl;
    }

    return 0;
}
