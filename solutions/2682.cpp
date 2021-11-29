#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, last = -1, ans = -1;
    while (cin >> n)
    {
        if (ans == -1 && n < last)
            ans = last + 1;
        last = n;
    }
    if (ans == -1)
        cout << n + 1 << endl;
    else
        cout << ans << endl;
    return 0;
}
