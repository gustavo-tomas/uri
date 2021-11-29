#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, ans;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        if (n % 4 == 0)
            ans = 1;
        if (n % 4 == 1)
            ans = 7;
        if (n % 4 == 2)
            ans = 9;
        if (n % 4 == 3)
            ans = 3;
        printf("%d\n", ans);
    }
    return 0;
}
