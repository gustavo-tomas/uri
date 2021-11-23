#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        int sum = 0, price;
        for (int i = 1; i <= n; i++)
        {
            cin >> price;
            if (n - m < i)
                sum += price;
        }
        cout << sum << endl;
    }
    return 0;
}
