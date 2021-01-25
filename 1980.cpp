#include<bits/stdc++.h>
using namespace std;
#define ULL unsigned long long int

ULL fat(ULL n){
    if(n == 0 || n == 1) return 1;
    return n * fat(n-1);
}

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    while(cin >> s && s != "0"){
        cout << fat(s.size()) << endl;
    }
 
    return 0;
}
