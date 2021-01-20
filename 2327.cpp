#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, square[1234][1234];
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> square[i][j];
        }
    }

    int sum=0, sum_l=0, sum_c=0, sum_d1=0, sum_d2=0, ok=1;
    for(int i=0; i<n; i++) sum += square[i][0];

    for(int i=0; i<n && ok; i++){
        sum_l = 0;
        sum_c = 0;
        sum_d1 += square[i][i];
        sum_d2 += square[i][n-i-1];
        
        for(int j=0; j<n; j++){
            sum_l += square[i][j];
            sum_c += square[j][i];
        }
        if(sum_l != sum) ok = 0;
        if(sum_c != sum) ok = 0;
    }
    
    if(sum_d1 != sum) ok = 0;
    if(sum_d2 != sum) ok = 0;

    if(ok) cout << sum << endl;
    else cout << -1 << endl;
    
    return 0;
}
