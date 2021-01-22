#include <bits/stdc++.h>
using namespace std;
#define M 2147483647
#define ULL unsigned long long int

ULL power(ULL base, ULL exp){

    if(exp == 0) return 1;

    if(exp % 2)
        return (((base % M * power(base, (exp/2)) % M) % M) % M * (power(base, (exp/2)) % M)) % M;
    
    return (power(base, (exp/2)) % M * power(base, (exp/2)) % M) % M;
}

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    ULL n;
    cin >> n;
    cout << power(3,n) << endl;

    return 0;
}
