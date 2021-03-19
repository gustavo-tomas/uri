#include <bits/stdc++.h>
using namespace std;
 
string to_lower(string s){
    string res = s;
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z') res[i] += 32;
    }
    return res;
}

bool special(char s){
    if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 's')
        return true;    
    return false;
}

int main() {
 
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        s = to_lower(s);
        
        unsigned int poss = 1;
        for(int i=0; i<s.size(); i++){
            if(special(s[i]))
                poss *= 3;
            else poss *= 2;
        }
        cout << poss << endl;
    }
 
    return 0;
}
