#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, num[100005];
    while(cin >> n && n){
        
        for(int i=1; i<=n; i++) cin >> num[i];
        cin >> k;
        for(int i=k; i<=n; ){
            if(num[i] == i){
                cout << num[i] << endl;
                break;
            } else {
                i = num[i];
            }
        }
    }

    return 0;
}
