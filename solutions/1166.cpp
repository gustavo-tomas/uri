#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t;
    cin >> t;
    while (t--) {
        cin >> n;

        int sum = 3;
        if (n == 1) sum = 1;
        else if (n == 2) sum = 3;
        else {
            int pow = 4, swap = 0;
            for (int i = 3; i <= n; i++) {
                sum += pow;
                swap++;
                if (swap >= 2) {
                    swap = 0;
                    pow += 2;
                }
            }
        }
        cout << sum << "\n";
    }

    return 0;
}
