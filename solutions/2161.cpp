#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // similar to 2166
    int n;
    long double root = 0;
    cin >> n;
    
    while(n--){
        root = root + 6; // 6 + 1/6 ...
        root = 1/root;
    }
    root += 3;  // 3 + 1/6 + 1/6 ...

    cout << fixed << setprecision(10) << root << endl;

    return 0;
}
