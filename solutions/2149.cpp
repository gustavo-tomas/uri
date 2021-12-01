#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        LL last = 1, last2 = 0, res;
        for (LL i = 2; i < n; i++)
        {
            if (i % 2 == 0)
                res = last + last2;
            else
                res = last * last2;
            last2 = last;
            last = res;
        }
        if (n == 1)
            cout << 0 << endl;
        else if (n == 2)
            cout << 1 << endl;
        else
            cout << res << endl;
    }
    return 0;
}
