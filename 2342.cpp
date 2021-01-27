#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int res, max, p, q;
    char op;
    cin >> max >> p >> op >> q;
    if(op == '+'){
        res = p + q;
    } else {
        res = p * q;
    }

    if(res > max) cout << "OVERFLOW" << endl;
    else cout << "OK" << endl;

    return 0;
}
