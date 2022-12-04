#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string biggest = "", res = "";
    while (getline(cin, s) && s != "0") {
        
        int flag = 0;
        istringstream ss(s);
        string word;
        vector<string> words;
        while (ss >> word) words.push_back(word);

        for (auto w : words) {
            if (flag) res += "-";
            res += to_string(w.size());
            if (w.size() >= biggest.size()) biggest = word;
            flag = 1;
        }
        res += "\n";
    }
    cout << res << "\n";
    cout << "The biggest word: " << biggest << "\n";

    return 0;
}
