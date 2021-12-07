#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int count = 0, m, door[3];
        cin >> m >> door[0] >> door[1] >> door[2];
        for (int i = 0; i < 3; i++)
            if (door[i] == 1)
                count++;

        if (count > 1)
            cout << "X" << endl;
        else if (m == 0)
        {
            if (count)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}
