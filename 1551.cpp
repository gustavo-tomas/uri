#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    string s;
    cin >> n;
    
    getline(cin, s);
    while (n--){
        getline(cin, s);
        
        int ab[1234];
        for(int i=97; i<=122; i++) ab[i] = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                ab[s[i]]++;
            }
        }

        int count = 0;
        for(int i=97; i<=122; i++){
            if(ab[i] >= 1) count++;
        }

        if(count < 13) cout << "frase mal elaborada" << endl;
        else if(count >= 13 && count < 26) cout << "frase quase completa" << endl;
        else cout << "frase completa" << endl;
    }

    return 0;
}
