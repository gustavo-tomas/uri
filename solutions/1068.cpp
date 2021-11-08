#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    string s;
    while(cin >> s){
        int aux[1234], tik=0, flag=0;
        for(int i=0; i<s.size(); i++) aux[i] = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '(') aux[i] = 1;
            if(s[i] == ')') aux[i] = 2;
        }
        for(int i=0; i<s.size(); i++){
            if(aux[i] == 1) tik++;
            if(aux[i] == 2) tik--;
            if(tik < 0) flag = 1;
        }
        if(tik > 0) flag = 1;
        if(flag) cout << "incorrect" << endl;
        else cout << "correct" << endl;
    }
    return 0;
}
