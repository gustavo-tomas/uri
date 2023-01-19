#include <bits/stdc++.h>
using namespace std;

int main() {

    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // cout.tie(NULL);

    int t;
    while (cin >> t && t > 0) {
        for (int i = 1; i <= t; i++) {
            double q, a, b, h = 5;
            cin >> q >> a >> b;
            double tot_area = q * (max(a, b) + min(a, b)) * h / 2.0;
            
            cout << "Size #" << i << ":\n";
            printf("Ice Cream Used: %.2lf cm2\n", tot_area);
        }
        cout << "\n";
    }

    return 0;
}
