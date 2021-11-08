#include<bits/stdc++.h>
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
    
    int n;
    while(cin >> n){
        if(prime(n)){
            int flag = 0;
            while(n > 0 && !flag){
                int num = n % 10;
                if(!prime(num)) flag = 1;
                n /= 10;
            }
            if(!flag) cout << "Super" << endl;
            else cout << "Primo" << endl;
        }
        else cout << "Nada" << endl;
    }
 
    return 0;
}
