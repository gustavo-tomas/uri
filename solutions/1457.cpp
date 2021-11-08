#include <bits/stdc++.h>
using namespace std;
#define LL long long int

LL k_fat(int n, int k){
    LL prod = 1;
    LL cont = 0;
    while(n-k*cont > 0){
        prod *= (n-k*cont);
        cont++;
    }
    return prod;
}
 
int main() {
 
    int t, n, k;
    string sk;
    cin >> t;
    while(t--){
        cin >> n >> sk;
        k = sk.size();
        cout << k_fat(n, k) << endl;
    }
    return 0;
}
