#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    
    while(n--){
        string s;
        cin >> s;
        
        int tik=0, cont=0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '<') tik++;
            else if(s[i] == '>' && tik > 0){
                tik--;
                cont++;
            }
        }
        cout << cont << endl;
    }
    return 0;
}
