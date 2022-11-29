#include <bits/stdc++.h>
#include <cctype>
#include <set>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    while (n--) {
        string name, s;
        cin >> s;
        name = s;
        for(auto& c : s) c = tolower(c);

        int count = 0;
        set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        for (int i = 0; i < s.size() && count < 3; i++) {
            if (vowels.find(s[i]) == vowels.end())
                count++;
            else
                count = 0;
        }
        if (count < 3) cout << name << " eh facil\n";
        else cout << name << " nao eh facil\n";
    }

    return 0;
}
