#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int point, sum[n];
        for (int i = 0; i < n; i++)
        {
            cin >> point;
            if (i == 0)
                sum[i] = point;
            else
                sum[i] = sum[i - 1] + point;
        }

        int ans = 0, j = 0, k = 0, size = sum[n - 1] / 3;
        for (int i = 0; sum[i] + 2 * size <= sum[n - 1]; i++)
        {
            while (sum[j] < sum[i] + size)
                j++;
            while (sum[k] < sum[i] + 2 * size)
                k++;
            if (sum[j] == sum[i] + size && sum[k] == sum[i] + 2 * size)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
