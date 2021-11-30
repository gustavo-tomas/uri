#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int ok = 1, dice[6];
        cin >> dice[0];
        cin >> dice[1] >> dice[2] >> dice[3] >> dice[4];
        cin >> dice[5];

        if (dice[0] + dice[5] != 7 ||
            dice[1] + dice[3] != 7 ||
            dice[2] + dice[4] != 7)
            ok = 0;

        sort(dice, dice + 6);
        for (int i = 0; i < 6; i++)
            if (dice[i] != i + 1)
                ok = 0;

        if (ok)
            cout << "SIM" << endl;
        else
            cout << "NAO" << endl;
    }
    return 0;
}
