#include <bits/stdc++.h>
using namespace std;
#define ULL unsigned long long int

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, c, d;
    cin >> n;
    while(n--){
        cin >> c >> d;
        int res = pow(26,c) * pow(10,d);
        if(c == d && !c) res = 0;
        cout << res << endl;
    }

    return 0;
}
