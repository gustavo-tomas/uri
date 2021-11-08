#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    
    unsigned long long int res = 1;
    while(n--) res *= 3;
    
    cout << res << endl;
 
    return 0;
}
