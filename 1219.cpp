#include <bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897

int main() {
 
    int a, b, c;
    double p, a_trn, a_cin, a_ccr, r_cin, r_ccr;
    
    while(cin >> a >> b >> c){
    
        // a_trn = P/2 * r_cin -> r_cin = a_trn / p -> p eh semiperimetro
        // r_ccr = (a*b*c)/(4.0*a_trn)
        
        p = (a+b+c)/2.0;
        
        a_trn = sqrt(p * (p-a) * (p-b) * (p-c));
        
        r_cin = a_trn / p;
        a_cin = PI * r_cin * r_cin;
        
        r_ccr = (a*b*c)/(4.0*a_trn);
        a_ccr = PI * r_ccr * r_ccr;
        
        cout << fixed << setprecision(4) << a_ccr - a_trn << " ";
        cout << fixed << setprecision(4) << a_trn - a_cin << " ";
        cout << fixed << setprecision(4) << a_cin << endl;
    }
 
    return 0;
}
