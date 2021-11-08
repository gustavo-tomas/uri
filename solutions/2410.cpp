#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, aux;
    cin >> n;
    set<int> here;
    while(n--){
        cin >> aux;
        here.insert(aux);
    }
    cout << here.size() << endl;
    
    return 0;
}
