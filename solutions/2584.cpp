#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    // area = P * a / 2 where a = (l/2) / tan(36) 
    int t;
    cin >> t;
    while(t--){
        double l;
        cin >> l;
        double a = (l/2.0) / tan(36.0*M_PI/180.0);
        cout << fixed << setprecision(3) << (double) (l*5*a)/2.0 << endl;
    }

    return 0;
}
