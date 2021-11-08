#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    while(cin >> n && n){
        int def[100005], sorted[100005];
        for(int i=0; i<n; i++){
            cin >> def[i];
            sorted[i] = def[i];
        }
        sort(sorted,sorted+n);
        for(int i=0; i<n; i++){
            if(def[i] == sorted[n-2]){
                cout << i+1 << endl;
            }
        }
        
    }

    return 0;
}
