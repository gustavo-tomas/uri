#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 100005;
    int first = 1, second = 0, inc = 0, top = 1;
    vector<pair<int, int>> table(100005, make_pair(0, 0));
    
    for (int i = 1; i <= n; i++) {
        if (second > top) {
            top++;
            second = 0;
            first += top;
            inc += top;
        }
        table[i] = make_pair(first, second);
        second++;
    }
    while (cin >> n && n > 0)
        cout << table[n].first << " " << table[n].second << "\n";

    return 0;
}
