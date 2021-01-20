#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, count=1, first=1;
    string s, sub;
    
    while (cin >> n && n){
        
        cin >> s;
        sub = to_string(n);
        
        if(first){
            cout << "Instancia " << count << endl;
            first = 0;   
        } else{
            cout << "\nInstancia " << count << endl;
        }
            
        auto found = s.find(sub);
        if(found < s.size()) cout << "verdadeira" << endl;
        else cout << "falsa" << endl;
        count++;
    }
    
    return 0;
}
