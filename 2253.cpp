#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    while(getline(cin, s)){
        bool valid=true, lower=false, upper=false, number=false;
        if(s.size() < 6 || s.size() > 32) valid = false;
        for(int i=0; i<s.size() && valid; i++){
            if(s[i] >= 97 && s[i] <= 122) lower = true;
            else if(s[i] >= 65 && s[i] <= 90) upper = true;
            else if(s[i] >= 48 && s[i] <= 57) number = true;
            else valid = false;
        }
        if(valid && lower && upper && number)
            cout << "Senha valida." << endl;
        else 
            cout << "Senha invalida." << endl;
    }

    return 0;
}
