#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    cin >> s;
    int tik=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '(') tik++;
        if(s[i] == ')' && tik > 0) tik--;
    }

    if(!tik) cout << "Partiu RU!" << endl;
    else cout << "Ainda temos " << tik << " assunto(s) pendente(s)!" << endl;

    return 0;
}
