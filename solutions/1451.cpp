#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, news;
    while (getline(cin, s)) {
        int size = s.size(), pos = 0;
        news = "";
        
        for (int i = 0; i < size; i++) {
            if (s[i] == ']') pos = news.size();
            else if (s[i] == '[') pos = 0;
            else {
                news.insert(pos, string(1, s[i]));
                pos++;
            }
        }
        cout << news << "\n";
    }

    return 0;
}
