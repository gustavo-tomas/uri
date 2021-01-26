#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, mat[123][123];
    while(cin >> n >> m){
        unsigned int sum = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> mat[i][j];
                sum += mat[i][j];
            }
        }
        cout << sum / 60 << " saca(s) e " << sum % 60 << " litro(s)" << endl;
    }
    
    return 0;
}
