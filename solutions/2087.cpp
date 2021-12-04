#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    while (cin >> n && n > 0)
    {
        string s;
        int ok = 1;
        vector<string> words;
        while (n--)
        {
            cin >> s;
            for (int i = 0; ok && i < words.size(); i++)
                if (words[i].substr(0, s.size()) == s || s.substr(0, words[i].size()) == words[i])
                    ok = 0;
            words.push_back(s);
        }
        if (ok)
            cout << "Conjunto Bom" << endl;
        else
            cout << "Conjunto Ruim" << endl;
    }
    return 0;
}
