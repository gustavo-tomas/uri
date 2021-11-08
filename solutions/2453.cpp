#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    getline(cin, s);
    int remove = 1;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'p' && remove){
            remove = 0;
        }
        else{
            cout << s[i];
            remove = 1;
        }
    }
    cout << endl;

    return 0;
}
