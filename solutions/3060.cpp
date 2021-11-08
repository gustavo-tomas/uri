#include <bits/stdc++.h>
using namespace std;
#define LL long long int

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int val, n, res[12345];
    cin >> val >> n;
    
    for(int i=0; i<n; i++) res[i] = val/n;
    
    if(val % n != 0)
        for(int i=0; i<val % n; i++) res[i]++;
    
    for(int i=0; i<n; i++) cout << res[i] << endl;

    return 0;
}
