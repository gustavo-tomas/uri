#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    int best_time = 1'000'000'001;
    best_time = min(best_time, b * 2 + c * 4);
    best_time = min(best_time, a * 2 + c * 2);
    best_time = min(best_time, a * 4 + b * 2);
    cout << best_time << "\n";

    return 0;
}
