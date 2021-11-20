#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, v;
    while (cin >> n >> m)
    {
        map<int, vector<int>> table;
        for (int i = 1; i <= n; i++)
        {
            cin >> v;
            vector<int> temp;
            if (table.count(v))
            {
                temp = table[v];
            }
            temp.push_back(i);
            table[v] = temp;
        }

        while (m--)
        {
            int occ, e;
            cin >> occ >> e;
            if (occ - 1 < table[e].size())
                cout << table[e][occ - 1] << endl;
            else
                cout << 0 << endl;
        }
    }
    return 0;
}
