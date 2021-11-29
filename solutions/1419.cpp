#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n && n)
    {
        int m[n], l[n], pm = 0, pl = 0;
        for (int i = 0; i < n; i++)
            cin >> m[i];
        for (int i = 0; i < n; i++)
            cin >> l[i];

        int cm = 0, cl = 0, lastm = m[0], lastl = l[0], ok = 1;
        for (int i = 0; i < n; i++)
        {
            pm += m[i];
            pl += l[i];
            if (m[i] == lastm)
                cm++;
            else
            {
                lastm = m[i];
                cm = 1;
            }
            if (l[i] == lastl)
                cl++;
            else
            {
                lastl = l[i];
                cl = 1;
            }
            if (ok && cm == 3 && cl < 3)
            {
                pm += 30;
                ok = 0;
            }
            else if (ok && cl == 3 && cm < 3)
            {
                pl += 30;
                ok = 0;
            }
            else if (cm == cl && cm == 3)
                ok = 0;
        }
        if (pm > pl)
            cout << "M" << endl;
        else if (pl > pm)
            cout << "L" << endl;
        else
            cout << "T" << endl;
    }
    return 0;
}
