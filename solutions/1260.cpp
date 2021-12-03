#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string tree;
    getline(cin, tree);
    getline(cin, tree);

    while (n--)
    {
        int total = 0;
        map<string, int> trees;
        while (getline(cin, tree) && tree[0] != 0)
        {
            total++;
            if (trees.count(tree))
                trees[tree]++;
            else
                trees[tree] = 1;
        }
        for (auto i : trees)
            cout << i.first << " " << fixed << setprecision(4) << 100.0 * i.second / total << endl;
        if (n >= 1)
            cout << endl;
    }
    return 0;
}
