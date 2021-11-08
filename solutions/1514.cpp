#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, mat[123][123];
    while(cin >> n >> m && (n || m)){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> mat[i][j];
            }
        }

        // nenhuma linha deve ser apenas 0;
        // nenhuma linha deve ser apenas 1;
        // nenhuma coluna deve ser apenas 0;
        // nenhuma coluna deve ser apenas 1;
        
        int objectives=4, f1=0, f2=0, f3=0, f4=0;
        int zeros_line=m, zeros_column=n;
        
        for(int i=0; i<n; i++){
            zeros_line = m;
            for(int j=0; j<m; j++){
                if(mat[i][j]) zeros_line--;
            }
            if(!zeros_line) f2 = 1;
            if(zeros_line == m) f3 = 1;
        }
            
        for(int k=0; k<m; k++){
            zeros_column = n;
            for(int j=0; j<n; j++){
                if(mat[j][k]) zeros_column--;
            }
            if(!zeros_column) f1 = 1;
            if(zeros_column == n) f4 = 1;
        }
        
        cout << objectives-f1-f2-f3-f4 << endl;
    }

    return 0;
}
