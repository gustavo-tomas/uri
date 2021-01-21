#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int xi, yi, xf, yf, dist;
    cin >> xi >> yi >> xf >> yf;

    dist = abs(xf-xi) + abs(yf-yi);
    cout << dist << endl;

    return 0;
}
