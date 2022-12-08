#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    long double c, p, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> c >> p;
        sum += c / p;
    }

    if (sum > 1.0) cout << "FAIL\n";
    else cout << "OK\n";

    return 0;
}
