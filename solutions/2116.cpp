#include <bits/stdc++.h>
using namespace std;

int prime(int x)
{
    if (x == 1)
        return 0;
    if (x % 2 == 0)
        return x == 2 ? 1 : 0;
    for (int i = 3; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n, m, p = 0, q = 0;
    cin >> n >> m;
    for (int i = n; i >= 2 && !p; i--)
        if (prime(i))
            p = i;

    for (int i = m; i >= 2 && !q; i--)
        if (prime(i))
            q = i;

    cout << p * q << endl;
    return 0;
}
