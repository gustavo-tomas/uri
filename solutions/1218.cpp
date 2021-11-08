#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int counter=1;
    string s, wanted_size;
    while(cin >> wanted_size){
        getline(cin,s);
        getline(cin,s);

        int male=0, female=0;
        for(int i=0; i<s.size(); i++){
            if(s[i] != ' '){
                if(s[i] == wanted_size[0] && s[i+1] == wanted_size[1]){
                    if(s[i+3] == 'M') male++;
                    else female++;
                }
            }
        }
        if(counter > 1) cout << endl;
        cout << "Caso " << counter << ":" << endl;
        cout << "Pares Iguais: " << male+female << endl;
        cout << "F: " << female << endl;
        cout << "M: " << male << endl;
        counter++;
    }
    
    return 0;
}
