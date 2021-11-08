#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    string s;

    getline(cin,s);
    while(t--){
        getline(cin,s);
        for(int i = s.size()/2 - 1; i>=0; i--) cout << s[i];
        for(int i = s.size()-1; i >= s.size()/2; i--) cout << s[i];
        cout << endl;
    }
 
    return 0;
}
