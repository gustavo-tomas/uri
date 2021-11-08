#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, mat[123][123];
    
    while(cin >> n >> m){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> mat[i][j];
            }
        }
    
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int count=0, find=0;
                if(mat[i][j] == 1){
                    cout << 9;
                    find = 1;
                }
                if(!find && i < n-1 && mat[i+1][j] == 1){
                    count++;
                }
                if(!find && j < m-1 && mat[i][j+1] == 1){
                    count++;
                }
                if(!find && j > 0 && mat[i][j-1] == 1){
                    count++;
                }
                if(!find && i > 0 && mat[i-1][j] == 1){
                    count++;
                }
                if(!find) cout << count;
            }
            cout << endl;
        }
    }

    return 0;
}
