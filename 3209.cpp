#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, n, num, sum;
    cin >> t;
    while(t--){
        cin >> n;
        sum = 0;
        while(n--){
            cin >> num;
            sum += num-1;
        }
        sum += 1;
        cout << sum << endl;
    }
    
    return 0;
}
