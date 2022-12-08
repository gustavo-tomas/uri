#include <bits/stdc++.h>
using namespace std;

int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double f1, f2;
    cin >> f1 >> f2;
    printf("%.6lf\n", ((1.0 + f1 / 100.0) * (1.0 + f2 / 100.0) - 1.0) * 100.0);

    return 0;
}
