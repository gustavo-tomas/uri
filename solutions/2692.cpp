#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    vector<pair<char, char>> subs;
    cin >> n >> m;
    while (n--)
    {
        char e, s;
        cin >> e >> s;
        subs.push_back(make_pair(e, s));
    }
    string str;
    getline(cin, str);
    while (m--)
    {
        getline(cin, str);
        for (int i = 0; i < subs.size(); i++)
        {
            for (int j = 0; j < str.size(); j++)
            {
                if (str[j] == subs[i].first)
                {
                    str[j] = subs[i].second;
                }
                else if (str[j] == subs[i].second)
                {
                    str[j] = subs[i].first;
                }
            }
        }
        cout << str << endl;
    }
    return 0;
}
