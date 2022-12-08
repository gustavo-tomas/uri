#include <bits/stdc++.h>
using namespace std;

string remove_dup(string s) {
    for (int i = 0; i < s.size(); i++) {
        int j = i + 1;
        while (j < s.size()) {
            if (s[i] == s[j]) s.erase(j, 1);
            else j++;
        }
    }
    for (int i = 0; i < s.size(); i++) { if (s[i] == ' ') s.erase(i, 1); }
    return s;
}

int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string line;
    while (getline(cin, line)) {
        sort(line.begin(), line.end());
        line = remove_dup(line);

        int first = 1;        
        for (int i = 0; i < line.size(); i++) {
            if (i < line.size() - 1 && line[i] + 1 == line[i + 1]) {
                int ini_pos = i;
                while (i < line.size() - 1 && line[i] + 1 == line[i + 1])
                    i++;

                if (!first) cout << ", ";
                cout << line[ini_pos] << ":" << line[i];
            }
            else {
                if (!first) cout << ", ";
                cout << line[i] << ":" << line[i];
            }
            
            first = 0;
        }
        cout << endl;
    }

    return 0;
}
