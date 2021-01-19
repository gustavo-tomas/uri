#include <bits/stdc++.h>
using namespace std;

string tolower(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    return s;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    while(getline(cin,s)){
        s = tolower(s);
        int prev=0;
        for(int i=0; i<s.size(); i++){
            if(s[i] != ' ' && !prev){
                s[i] -= 32;
            }
            if(s[i] != ' '){
                prev = !prev;
            }
        }
        cout << s << endl;
    }
    
    return 0;
}
