#include <bits/stdc++.h>
using namespace std;

int prime(int x){
    if(x == 1) return 0;
    if(x % 2 == 0) return (x == 2) ? 1 : 0;   
    for(int i=3; i<=sqrt(x); i++){
        if(x % i == 0) return 0;
    }
    return 1;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, num, primo;
    cin >> n;
    while(n--){
        cin >> num;
        num++;
        primo = num+2;
        if(!(num % 7) && (num % 2) && (prime(primo)))
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }
    
    return 0;
}
