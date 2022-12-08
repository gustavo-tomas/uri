#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, d;
    while (cin >> n >> d) {
        int found = 0;
        string date;
        for (int i = 0; i < d; i++) {
            cin >> date;
            int ok, count = 0;
            for (int j = 0; j < n; j++) {
                cin >> ok;
                if (ok) count++;
            }
            if (!found && count == n) {
                cout << date << "\n";
                found = 1;
            }
        }
        if (!found) cout << "Pizza antes de FdI\n";
    }

    return 0;
}
