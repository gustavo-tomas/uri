#include<bits/stdc++.h>
using namespace std;
#define ULL unsigned long long int

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    ULL a, b;
    while(cin >> a >> b){
        ULL sum = ( (b - a + 1) * (a + b) ) / 2;
        cout << sum << endl;
    }
 
    return 0;
}
