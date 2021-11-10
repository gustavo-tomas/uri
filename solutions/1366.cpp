#include <bits/stdc++.h>
using namespace std;
 
int main() {

    int n, c, v;
    while (cin >> n && n) {
        double total = 0;
        while (n--) {
            cin >> c >> v;
            if (v / 4 >= 1) {
                total += v / 4;
                if ((v % 4) / 2 == 1) {
                    total += .5;
                }
            } else if (v / 2 == 1) {
                total += .5;
            }
        }
        cout << (int) total << endl;
    }
    return 0;
}
