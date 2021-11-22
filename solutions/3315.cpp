#include <bits/stdc++.h>
using namespace std;

void to_binary(unsigned int n)
{
    if (n / 2 != 0)
        to_binary(n / 2);
    printf("%d", n % 2);
}

int main()
{
    long int max_sum = 0;
    int day;
    for (int i = 0; i < 4; i++)
    {
        long int sum = 0;
        for (int j = 0; j < 7; j++)
        {
            cin >> day;
            sum += day;
        }
        max_sum = max(sum, max_sum);
    }
    cout << max_sum << " = ";
    to_binary(max_sum);
    cout << endl;
    return 0;
}
