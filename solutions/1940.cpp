#include <bits/stdc++.h>
using namespace std;

int main()
{
    int j, r;
    cin >> j >> r;
    int p, max_p = -1, player;
    vector<int> points(j + 5, 0);
    for (int i = 1; i <= r; i++)
    {
        for (int k = 1; k <= j; k++)
        {
            cin >> p;
            points[k] += p;
            if (points[k] >= max_p)
            {
                max_p = points[k];
                player = k;
            }
        }
    }
    cout << player << endl;
    return 0;
}
