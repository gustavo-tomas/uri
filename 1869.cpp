#include <bits/stdc++.h>
using namespace std;
#define ULL unsigned long long int

void to_base_32(ULL n){
    
    char number[100005];
    ULL count=-1;
    
    while(n >= 0){
        ULL digit = n % 32;
        if(digit > 9) number[++count] = 65 + (digit - 10);
        else number[++count] = 48 + digit;
        
        if(n / 32 == 0){
            number[++count] = n % 32;
            break;
        }
        n /= 32;
    }
    for(int i=count-1; i>=0; i--) cout << number[i];
}

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    ULL n;
    while(cin >> n){
        to_base_32(n);
        cout << endl;
    }

    return 0;
}
