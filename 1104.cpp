#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, aux;
    set<int> a, b;
    while(cin >> n >> m && (n || m)){
        for(int i=0; i<n; i++){
            cin >> aux;
            a.insert(aux);
        }
        for(int i=0; i<m; i++){
            cin >> aux;
            b.insert(aux);
        }

        int repeated=0, tradable1=0, tradable2=0;
       
        for(auto i : b){
            if(a.count(i)){
                repeated = 1;
            }
            if(!repeated) tradable1++;
            repeated = 0;
        }
        
        repeated = 0;
        for(auto i : a){
            if(b.count(i)){
                repeated = 1;
            }
            if(!repeated) tradable2++;
            repeated = 0;
        }
        
        cout << min(tradable1,tradable2) << endl;
        a.clear();
        b.clear();
    }
    
    return 0;
}
