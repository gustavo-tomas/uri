#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, tot = 0;
    cin >> n;
    if(n >= 101){
        tot += (n - 100) * 5;
        n = 100;
    }
    if(n >= 31 && n <= 100){
        tot += (n - 30) * 2;
        n = 30;
    }
    if(n >= 11 && n <= 30){
        tot += (n - 10) * 1;
        n = 10;
    }
    if(n <= 10){
        tot += 7;
    }
    cout << tot << endl;

    return 0;
}
