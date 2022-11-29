#include <bits/stdc++.h>
using namespace std;

// https://math.stackexchange.com/questions/190410/find-if-one-rectangle-can-fit-inside-the-other
// https://stackoverflow.com/questions/13784274/detect-if-one-rect-can-be-put-into-another-rect
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    double p = max(a, b), q = min(a, b);
    double x = max(c, d), y = min(c, d);

    string ans = "no";
    if (p <= x && q <= y) ans = "yes";

    else if (p > x && q <= y &&
        ((x + y) / (p + q)) * ((x + y) / (p + q)) +
        ((x - y) / (p - q)) * ((x - y) / (p - q)) >= 2.0)
        ans = "yes";
    else 
        ans = "no";

    cout << ans << "\n";

    return 0;
}
