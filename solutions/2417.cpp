#include <bits/stdc++.h>
using namespace std;

int main(){

    int c[4], f[4];
    for(int i=0; i<3; i++) cin >> c[i];
    for(int i=0; i<3; i++) cin >> f[i];

    c[3] = c[0] * 3 + c[1];
    f[3] = f[0] * 3 + f[1];

    if(c[3] > f[3]) {
        cout << 'C' << endl;
    } else if(f[3] > c[3]) {
        cout << 'F' << endl;
    } else {
        if(c[2] > f[2]) cout << 'C' << endl;
        if(f[2] > c[2]) cout << 'F' << endl;
        else cout << '=' << endl;
    }

    return 0;
}