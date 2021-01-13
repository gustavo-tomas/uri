#include <bits/stdc++.h>
using namespace std;

// lcm(a,b) = a*b/gcd(a,b)
int gcd(int a, int b){ 
    return (!a) ? b : gcd(b % a, a);
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int slow, fast, days;
    while(cin >> slow && slow){
        cin >> days >> fast;
        
        int mmc = lcm(slow,fast);
        int res = (mmc*days)/((mmc/slow) - (mmc/fast));
        cout << res;
        if(res > 1) cout << " paginas" << endl;
        else cout << " pagina" << endl;
    }

    return 0;
}
