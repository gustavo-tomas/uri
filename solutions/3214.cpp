#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int sum, e, f, c, tot = 0;
    cin >> e >> f >> c;
    sum = e + f;

    while(sum >= c){
        tot += (sum / c);
        sum = (sum / c) + (sum % c);
    }
    cout << tot << endl;

    return 0;
}