#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n;
    while (n--)
    {
        scanf("%dx%d", &x, &y);
        for (int i = 5; i <= 10; i++)
        {
            printf("%d x %d = %d", x, i, x * i);
            if (y != x)
                printf(" && %d x %d = %d", y, i, y * i);
            printf("\n");
        }
    }
    return 0;
}
