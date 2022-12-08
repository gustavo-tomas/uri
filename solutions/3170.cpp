#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int b, g;
    cin >> b >> g;
    int rem = g / 2 - b;

    if (rem > 0) cout << "Faltam " << rem << " bolinha(s)\n";
    else cout << "Amelia tem todas bolinhas!\n";

    return 0;
}
