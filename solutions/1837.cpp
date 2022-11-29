#include <bits/stdc++.h>
using namespace std;

pair<int, int> divide_unsigned(int a, int b) {
    int q = 0, r = a;
    while (r >= b) {
        q = q + 1;
        r = r - b;
    }
    return make_pair(q, r);
}

pair<int, int> divide(int a, int b) {
    if (b == 0)
        return make_pair(0, 0);
    if (b < 0) {
        pair<int, int> qr = divide(a, -b);
        return make_pair(-qr.first, qr.second);
    }
    if (a < 0) {
        pair<int, int> qr = divide(-a, b);
        if (qr.second == 0)
            return make_pair(-qr.first, 0);
        else
            return make_pair(-qr.first - 1, b - qr.second);
    }
    return divide_unsigned(a, b);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;
    pair<int, int> qr = divide(a, b);
    cout << qr.first << " " << qr.second << "\n";

    return 0;
}
