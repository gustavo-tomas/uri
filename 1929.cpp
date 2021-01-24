#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a + b > c && a + c > b && b + c > a) cout << "S" << endl;
    else if(a + b > d && a + d > b && b + d > a) cout << "S" << endl;
    else if(a + c > d && a + d > c && c + d > a) cout << "S" << endl;
    else if(b + c > d && b + d > c && c + d > b) cout << "S" << endl;
    else cout << "N" << endl;

    return 0;
}
