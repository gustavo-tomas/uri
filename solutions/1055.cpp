#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, n, num;
    cin >> t;
    for (int j = 1; j <= t; j++) {
        cin >> n;
        int seq[n];
        for (int i = 0; i < n; i++) cin >> seq[i];
        sort(seq,seq + n);

        // ugly :(
        int perf[n];
        if (n % 2 != 0) {
            perf[0] = seq[n / 2];
            for (int i = 0, k = 1; k < n; i++, k += 2) {
                perf[k] = seq[n / 2 - i - 1];
                perf[k + 1] = seq[n - i - 1];
            }
        } else {
            for (int i = 0, k = 0; k < n; i++, k += 2) {
                perf[k] = seq[n / 2 - i - 1];
                perf[k + 1] = seq[n - i - 1];
            }
        }
        unsigned int sum = 0;
        for (int i = 0; i < n - 1; i++) {
            sum += abs(perf[i] - perf[i + 1]);
        }
        if (n % 2 != 0) {
            int mid = seq[n / 2];
            if (abs(mid - perf[1]) < abs(mid - perf[n - 1])) {
                sum = sum - abs(mid - perf[1]) + abs(mid - perf[n - 1]);
            }
        }
        cout << "Case " << j << ": " << sum << "\n";
    }
    return 0;
}
