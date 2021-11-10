#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    while (cin >> n >> m && n) {
        set<int> tickets, checked;
        int t, count = 0;
        for (int i = 0; i < m; i++) {
            cin >> t;
            if (tickets.count(t) && !checked.count(t)) {
                checked.insert(t);
                count++;
            } else {
                tickets.insert(t);
            }
        }
        cout << count << endl;
    }
    return 0;
}
