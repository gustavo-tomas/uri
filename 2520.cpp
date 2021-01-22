#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, mat[123][123], xi, yi, xf, yf;
    while(cin >> n >> m){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> mat[i][j];
                if(mat[i][j] == 1){
                    xi = j;
                    yi = i;
                }
                if(mat[i][j] == 2){
                    xf = j;
                    yf = i;
                }
            }
        }
        cout << abs(xf-xi) + abs(yf-yi) << endl;
    }

    return 0;
}
