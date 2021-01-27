#include<bits/stdc++.h>
using namespace std;
#define LL long long int

LL fat(LL n){
    if(n == 0 || n == 1) return 1;
    return n * fat(n-1);
}

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, i = 0, sum = 0, factorial = 1, count = 0;
    cin >> n;

    while(fat(i) < n){
        factorial = fat(i);
        i++;
    }

    while(sum != n && sum <= n){
        if(factorial + sum <= n){
            sum += factorial;
            count++;
        }
        else factorial = fat(i--);
    }
    cout << count << endl;

    return 0;
}
