#include <bits/stdc++.h>
#define LL long long int 
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    LL a, b;
    while(cin >> a >> b && (a > 0 || b > 0)){
        
        LL cont = 0, carry = 0, digit1, digit2;
        
        while(max(a,b) > 0){
            digit1 = a % 10;
            digit2 = b % 10;

            if(digit1 + digit2 + carry >= 10){
                cont++;
                carry = 1;
            }
            else{
                carry = 0;
            }
            a /= 10;
            b /= 10;
        }

        if(!cont) cout << "No carry operation." << endl;
        else if (cont == 1) cout << "1 carry operation." << endl;
        else cout << cont << " carry operations." << endl;
    }
    return 0;
}
