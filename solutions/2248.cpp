#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 1;
    while (cin >> n && n)
    {
        int m, avg, highest = 0;
        vector<pair<int, int>> mat, ans;
        while (n--)
        {
            cin >> m >> avg;
            mat.push_back(make_pair(m, avg));
            highest = max(highest, avg);
        }
        for (auto i : mat)
            if (i.second == highest)
                ans.push_back(i);

        cout << "Turma " << count << endl;
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i].first << " ";

        cout << "\n\n";
        count++;
    }
    return 0;
}
