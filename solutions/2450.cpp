#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, mat[534][534];
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];

    int leftmost = m - 1, ok = 1;
    for (int i = 0; ok && i < n; i++)
    {
        // leftmost
        for (int j = 0; ok && j < m; j++)
        {
            if (mat[i][j] != 0)
            {
                leftmost = j;
                break;
            }
            else
            {
                for (int k = i; ok && k < n; k++)
                    if (mat[k][j] != 0)
                        ok = 0;
            }
        }

        // zero below
        for (int j = i + 1; ok && j < n; j++)
            if (mat[j][leftmost] != 0)
                ok = 0;

        // zero left
        for (int j = leftmost - 1; ok && j >= 0; j--)
            if (mat[i][j] != 0)
                ok = 0;
    }
    if (ok)
        cout << "S" << endl;
    else
        cout << "N" << endl;
    return 0;
}
