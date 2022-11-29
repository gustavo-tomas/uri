#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int points[3];
    cin >> points[0] >> points[1] >> points[2];
    sort(points, points + 3);
    cout << points[1] << endl;

    return 0;
}
