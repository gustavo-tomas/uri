#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, t;
    cin >> n;
    map<int, int> tone;
    while (n--)
    {
        cin >> d >> t;
        tone[d] = t;
    }
    int ok = 1, last = 1e9 + 7;
    for (auto t : tone)
    {
        if (t.second > last)
            ok = 0;
        last = t.second;
    }
    if (ok)
        cout << "S" << endl;
    else
        cout << "N" << endl;
    return 0;
}
