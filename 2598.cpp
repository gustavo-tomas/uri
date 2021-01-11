#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, t;
    
    cin >> t;
    while(t--){
        cin >> n >> m;
        int res = n/m + ((n % m == 0) ? 0 : 1);
        cout << res << endl;
    }

    return 0;
}
