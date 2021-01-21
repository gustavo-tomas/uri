#include <bits/stdc++.h>
using namespace std;
#define ULL unsigned long long int

bool has_three(ULL x){
    while(x > 0){
        if(x % 10 == 3) return true;
        x /= 10; 
    }
    return false;
}

ULL fib(ULL x){
    ULL a=0, b=1, c;
    while(x > 0){
        c = b;
        b += a;
        a = c;

        if(has_three(b) || !(b % 3)) x--;
    }
    return b;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ULL n;
    while(cin >> n){
        cout << fib(n) << endl;
    }
    
    return 0;
}
