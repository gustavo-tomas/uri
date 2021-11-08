#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, a, b, c;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        int delta = b*b - 4*a*c;
        // cout << fixed << setprecision(2) << (double) a*(-b/2.0*a)*(b/2.0*a) - b*(b/2.0*a) + c << endl;
        cout << fixed << setprecision(2) << (double) -(delta / (4.0*a)) << endl;
    }

    return 0;
}
