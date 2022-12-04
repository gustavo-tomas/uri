#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double d, vf, vg;
    while (cin >> d >> vf >> vg) {
        if ((12.0 / vf) < (sqrt(12.0 * 12.0 + d * d) / vg)) 
            cout << "N\n";
        else
            cout << "S\n";
    }

    return 0;
}
