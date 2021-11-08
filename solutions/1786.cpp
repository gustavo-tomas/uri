#include <bits/stdc++.h>
using namespace std;
#define ULL unsigned long long int
#define LL long long int

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ULL cpf;
    while(cin >> cpf){
        ULL b1=0, b2=0, cont=9, temp = cpf, cont2=1;
        while(temp > 0){
            b1 += (temp % 10) * cont;
            b2 += (temp % 10) * cont2;
            cont--;
            cont2++;
            temp /= 10;
        }
        b1 %= 11;
        if(b1 >= 10) b1 = 0;
        b2 %= 11;
        if(b2 >= 10) b2 = 0;

        string s;
        int i=0;

        while(cpf > 0 || i < 9){
            s[9-i-1] = (char) (cpf % 10) + 48;
            cpf /= 10;
            i++;
        }
        
        for(ULL dot=1,i=0; i < 9; i++, dot++){
            cout << s[i];
            if(dot % 3 == 0 && dot < 9) cout << ".";
        }
        cout << "-" << b1 << b2 << endl;
    }
    
    return 0;
}
