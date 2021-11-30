#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l[3];
    cin >> l[0] >> l[1] >> l[2];
    sort(l, l + 3);
    if (l[0] < l[1] + l[2] && l[1] < l[0] + l[2] && l[2] < l[0] + l[1])
    {
        int h = l[2] * l[2];
        int c2 = l[1] * l[1];
        int c1 = l[0] * l[0];

        if (h == c2 + c1)
            cout << "r" << endl;
        else if (h > c2 + c1)
            cout << "o" << endl;
        else
            cout << "a" << endl;
    }
    else
        cout << "n" << endl;
    return 0;
}
