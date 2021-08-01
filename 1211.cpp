#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<string> list;
        string num;
        int max_match = 0;
        while (n--)
        {
            cin >> num;
            list.push_back(num);
        }
        sort(list.begin(), list.end());
        for (int i = 0; i < list.size() - 1; i++)
        {
            int match = 0, j = 0;
            while (j < list[i].size() && list[i][j] == list[i + 1][j])
            {
                match++;
                j++;
            }
            max_match += match;
        }
        cout << max_match << endl;
    }
    return 0;
}