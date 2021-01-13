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
    
    while(getline(cin, s) && s[0] != '*'){
        s = tolower(s);
        int new_word = 0, tautogram = 1;
        char curr_letter = s[0];         
        for(int i=0; i<s.size(); i++){
            if(s[i] == ' ') new_word = 1;
            else if(s[i] >= 'a' && s[i] <= 'z' && new_word){
                if(s[i] != curr_letter) tautogram = 0;
                new_word = 0;
            }
        }
        if(tautogram) cout << "Y" << endl;
        else cout << "N" << endl;
    }    

    return 0;
}
