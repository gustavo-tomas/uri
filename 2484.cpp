#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    while(cin >> s){
        int end = s.size()+1;
        string spaces = "";
        while(end-- > 0){
            if(0 < end) cout << spaces;
            for(int i=0; i<end; i++){
                if(i > 0) cout << " ";
                cout << s[i];
            }
            spaces += " ";
            cout << endl;
        }
    } 

    return 0;
}
