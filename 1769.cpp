#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string cpf;
    while(cin >> cpf){
        int valid = 0;
        
        for(int i=0; i<cpf.size(); i++) cpf[i] -= 48;
        
        int b1 = cpf[0] + cpf[1]*2 + cpf[2]*3 + cpf[4]*4 + cpf[5]*5 + cpf[6]*6 + cpf[8]*7 + cpf[9]*8 + cpf[10]*9;
        int b2 = cpf[0]*9 + cpf[1]*8 + cpf[2]*7 + cpf[4]*6 + cpf[5]*5 + cpf[6]*4 + cpf[8]*3 + cpf[9]*2 + cpf[10];
        
        b1 = (b1 % 11 == 10) ? 0 : (b1 % 11);
        b2 = (b2 % 11 == 10) ? 0 : (b2 % 11);
        
        if(b1 == cpf[12] && b2 == cpf[13]) valid = 1;
        if(valid) cout << "CPF valido" << endl;
        else cout << "CPF invalido" << endl;
    }

    return 0;
}
