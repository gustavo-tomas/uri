#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    string s;
    cin >> n;

    getline(cin,s);
    while(n--){
        getline(cin,s);
        
        for(int i=0; i<s.size(); i++){
            string aux = s.substr(i,8);
            
            if(aux == "oulupukk"){
                s[i-1] = 'J';
                s[i+8] = 'i';
            }
        }
        cout << s << endl;
    }

    return 0;
}
