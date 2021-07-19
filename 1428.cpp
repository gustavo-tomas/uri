#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, x, y;
    cin >> n;
    while(n--){
        cin >> x >> y;
        x -= 2;
        y -= 2;
        int p1 = ceil((double)x/3.0);
        int p2 = ceil((double)y/3.0);
        cout << p1*p2 << endl;
    }

    return 0;
}