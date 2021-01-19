#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n, m, vote, res[100005];
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i=0; i<=n; i++) res[i] = 0;
        for(int i=0; i<m; i++){
            cin >> vote;
            res[vote]++;
        }
        
        int ans=-1;
        for(int i=0; i<=n; i++){
            if(res[i] > m/2){
                ans = i;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
