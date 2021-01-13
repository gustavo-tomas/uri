#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, r;
    while(cin >> n >> r){
        int diver[1234], res[1234];
        for(int i=1; i<=n; i++) diver[i] = 0;
        for(int i=0; i<r; i++){
            int temp;
            cin >> temp;
            diver[temp] = 1;
        }
        
        if(n == r) cout << "*";
        else {
            for(int i=1; i<=n; i++){
                if(!diver[i]) cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
