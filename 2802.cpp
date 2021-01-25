#include<bits/stdc++.h>
using namespace std;
#define ULL unsigned long long int

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    ULL n;
    cin >> n;
    n = 1+(((n-1)*n)/2)+((n*(n-1)*(n-2)*(n-3))/24);
    cout << n << endl;

    return 0;
}
