#include <bits/stdc++.h>
using namespace std;

// good ref:
// https://www.geeksforgeeks.org/print-subsequences-string/
// https://www.geeksforgeeks.org/generating-distinct-subsequences-of-a-given-string-in-lexicographic-order/

void subsequences(string s, set<string>& sequences) {
    
    if (s.size() == 0) return;
 
    // If current string is not already present.
    if (sequences.find(s) == sequences.end()) {
        sequences.insert(s);
 
        // Remove a letter without altering the order
        for (int i = 0; i < s.size(); i++) {
            string t = s;
            t.erase(i, 1);
            subsequences(t, sequences);
        }
    }
    return;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    while (cin >> s) {
        set<string> sequences;
        subsequences(s, sequences);
        
        for (auto s : sequences)
            cout << s << "\n";
        cout << "\n";
    }
    return 0;
}
