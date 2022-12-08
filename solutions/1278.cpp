#include <bits/stdc++.h>
using namespace std;

int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, i_hate_this_type_of_output = 1;
    while (cin >> n && n > 0) {
        string line;
        getline(cin, line);

        int longest = 0;
        vector<string> form_lines;
        while (n--) {
            getline(cin, line);
            stringstream ss(line);

            string word, form_line = "";
            int first = 1;
            while (getline(ss, word, ' ')) {
                if (word[0] < 'A' || word[0] > 'Z') continue;
                if (!first) form_line += ' ';
                form_line += word;
                first = 0;
            }

            longest = max(longest, (int) form_line.size());
            form_lines.push_back(form_line);
        }

        if (!i_hate_this_type_of_output)
            cout << "\n";
            
        for (auto l : form_lines) {
            for (int i = 0; i < longest - l.size(); i++)
                cout << ' ';
            cout << l << "\n";
        }

        i_hate_this_type_of_output = 0;
    }

    return 0;
}
