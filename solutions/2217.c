#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &x);
        printf("%d\n", x % 2 == 0 ? 1 : 9);
    }
    return 0;
}
