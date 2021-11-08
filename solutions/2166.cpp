#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    long double root = 0;
    cin >> n;
    
    while(n--){
        root = root + 2; // 2 + 1/2 ...
        root = 1/root;
    }
    root += 1;  // 1 + 1/2 + 1/2 ...

    cout << fixed << setprecision(10) << root << endl;

    return 0;
}
