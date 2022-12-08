#include <bits/stdc++.h>
using namespace std;

int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string tag, new_tag, line;
    while (cin >> tag) {
        cin >> new_tag;
        getline(cin, line);
        getline(cin, line);

        string new_line = "";
        int check = 0;
        for (int i = 0; i < line.size(); i++) {
            if (line[i] == '<')
                check = 1;

            else if (line[i] == '>')
                check = 0;

            if (check && tolower(line[i]) == tolower(tag[0])) {
                int pos = 0;
                string temp = "", temp_tag = "", word = "";
                while (i < line.size() && pos < tag.size() && 
                       tolower(line[i]) == tolower(tag[pos])) {
                    word += line[i];
                    temp += tolower(line[i]);
                    temp_tag += tolower(tag[pos]);
                    pos++;
                    i++;
                }

                if (pos < tag.size() || temp != temp_tag)
                    new_line += word;
                else
                    new_line += new_tag;
                i--;
            }

            else
                new_line += line[i];
        }
        cout << new_line << "\n";
    }

    return 0;
}
