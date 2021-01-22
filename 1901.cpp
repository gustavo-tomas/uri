#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, mat[234][234];
    set<int> res;

    while(cin >> n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> mat[i][j];
            }
        }
    
        for(int k=0; k<2*n; k++){
            int posi, posj;
            cin >> posi >> posj;
            res.insert(mat[posi-1][posj-1]);
        }
        cout << res.size() << endl;
        res.clear();
    }

    return 0;
}
