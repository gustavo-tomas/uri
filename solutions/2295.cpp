#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double a, g, ra, rg;
    cin >> a >> g >> ra >> rg;

    double l_p_km_a = 1.0 / ra;
    double tot_price_l_a = l_p_km_a * a;

    double l_p_km_g = 1.0 / rg;
    double tot_price_l_g = l_p_km_g * g;

    if (tot_price_l_g <= tot_price_l_a) cout << "G\n";
    else cout << "A\n";

    return 0;
}
