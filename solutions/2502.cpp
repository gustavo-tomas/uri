#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int c, n;
    while (cin >> c >> n) {
        string cipher, cipher2;
        
        getline(cin, cipher);
        getline(cin, cipher);
        getline(cin, cipher2);

        map<char, char> letter;
        for (int i = 0; i < c; i++) {
            letter[toupper(cipher2[i])] = toupper(cipher[i]);
            letter[tolower(cipher2[i])] = tolower(cipher[i]);
            letter[toupper(cipher[i])] = toupper(cipher2[i]);
            letter[tolower(cipher[i])] = tolower(cipher2[i]);
        }

        string line;
        for (int i = 0; i < n; i++) {
            getline(cin, line);
            for (int j = 0; j < line.size(); j++) {
                if (letter.count(line[j]))
                    cout << letter[line[j]];
                else
                    cout << line[j];
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}
