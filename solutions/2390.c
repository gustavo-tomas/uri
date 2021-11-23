#include <stdio.h>

int main()
{
    int n, total_time = 0, curr_t, last_t = -100;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &curr_t);
        int dif = curr_t - last_t;
        last_t = curr_t;
        if (dif > 10)
            total_time += 10;
        else
            total_time += dif;
    }
    printf("%d\n", total_time);
    return 0;
}
