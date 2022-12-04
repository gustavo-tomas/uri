#include <bits/stdc++.h>
using namespace std;

int main() {

    int m, n;
    while (cin >> m >> n) {
        map<string, int> words;
        string w;
        int mon;
        
        for (int i = 0; i < m; i++) {
            cin >> w >> mon;
            words[w] = mon;
        }

        for (int i = 0; i < n; i++) {
            int sum = 0;
            while (cin >> w && w != ".") {
                if (words.count(w)) sum += words[w];
            }
            cout << sum << "\n";
        }
    }
    return 0;
}
