#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){ 
    return (!a) ? b : gcd(b % a, a);
}

// lcm = a*b/gcd(a,b)
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int dividendo, divisor = lcm(b,d);
    a = (divisor/b) * a;
    c = (divisor/d) * c;
    dividendo = a + c;

    while(gcd(dividendo,divisor) > 1){
        int g = gcd(dividendo,divisor);
        dividendo /= g;
        divisor /= g;
    }
    cout << dividendo << " " << divisor << endl;

    return 0;
}
