#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, vol_i, vol;
    cin >> vol_i >> n;
    while(n--){
        cin >> vol;
        vol_i += vol;
        vol_i = min(100,vol_i);
        vol_i = max(0,vol_i);
    }
    cout << vol_i << endl;

    return 0;
}
