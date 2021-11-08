#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    long n;
    cin >> n;
    if(n == 1) cout << 1;
    else{
        // Kamenetsky's formula M_E = e M_PI = pi
        long double x = n * log10(n/M_E) + log10(2 * M_PI * n)/2.0;
        x = floor(x) + 1;
        cout << (long) x << endl;
    }
 
    return 0;
}
