#include <bits/stdc++.h>
using namespace std;

int main(){

    double e1, e2, at, d, win;
    while(cin >> e1 >> e2 >> at >> d && e1 > 0){
        double n1 = ceil(e1/d), n2 = ceil(e2/d);
        double p = at/6, q = 1-p;
        if(at == 3)
            win = n1 / (n1 + n2);
        else 
            win = (1 - pow(q/p,n1)) / (1 - pow(q/p,n1+n2));
        cout << fixed << setprecision(1) << win*100.0 << endl;
    }
    return 0;
}