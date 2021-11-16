#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q, worker[2123];
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        worker[i] = i;
    }
    while (q--) {
        int e, a, b;
        cin >> e;
        if (e == 1) {
            cin >> a >> b;
            int t = worker[a];
            worker[a] = worker[b];
            worker[b] = t;
        }
        else {
            cin >> a;
            int curr = worker[a], count = 0;
            while (curr != a) {
                curr = worker[curr];
                count++;
            }
            cout << count << endl;
        }
    }
    return 0;
}
