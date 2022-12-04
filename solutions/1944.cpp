#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    stack<string> words;
    string w;
    int count = 0;
    getline(cin, w);

    while (n--) {
        if (words.empty()) words.push("F A C E");
        getline(cin, w);
        
        string rev(w);
        reverse(rev.begin(), rev.end());

        if (rev == words.top()) {
            words.pop();
            count++;
        } else {
            words.push(w);
        }
    }
    cout << count << "\n";

    return 0;
}
