#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int notes[n], sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> notes[i];
            sum += notes[i];
        }
        if (sum % n != 0) {
            cout << -1 << endl;
        } else {
            int avg = sum / n, total = 0;
            for (int i = n - 1; i >= 0 && notes[i] > avg; i--) {
                total += notes[i] - avg;
            }
            cout << total + 1 << endl;
        }
    }
    return 0;
}