#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ax, ay, bx, by, cx, cy, dx, dy, rx, ry;
    cin >> n;
    while (n--)
    {
        cin >> ax >> ay >> bx >> by;
        cin >> cx >> cy >> dx >> dy;
        cin >> rx >> ry;

        if (rx >= ax && rx <= bx && ry >= ay && ry <= dy)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
