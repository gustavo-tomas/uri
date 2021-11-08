#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n, aux;
    cin >> t;
    set<int> carneirinhos;
    
    while(t--){
        cin >> n;
        
        for(int i=0; i<n; i++){
            cin >> aux;
            carneirinhos.insert(aux);
        }
        cout << carneirinhos.size() << endl;
        carneirinhos.clear();
    }
    
    return 0;
}
