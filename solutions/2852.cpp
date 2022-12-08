#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string key, line;
    cin >> key >> n;

    getline(cin, line);
    while (n--) {
        getline(cin, line);
        stringstream ss(line);
        string word;

        int pos = 0, first = 1;
        while (getline(ss, word, ' ')) {
            if (word != "") {
                if (!first) cout << " ";
                if (word[0] != 'a' && word[0] != 'e' && word[0] != 'i' && word[0] != 'o' && word[0] != 'u') {
                    for (int i = 0; i < word.size(); i++) {
                        cout << (char) ((word[i] - 97 + key[pos] - 97) % 26 + 97);
                        pos = (pos + 1) % key.size();
                    }
                }
                else
                    cout << word;

                first = 0;
            }
        }

        cout << "\n";    
    }

    return 0;
}
