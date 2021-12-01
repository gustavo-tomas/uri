#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int sum = 0, count = 0;
        while (n--)
        {
            int w;
            cin >> w;
            sum += w;
            if (sum > m)
            {
                sum = w;
                count++;
            }
            else if (sum == m)
            {
                sum = 0;
                count++;
            }
        }
        if (sum > 0)
            count++;
        if (!count)
            cout << 1 << endl;
        else
            cout << count << endl;
    }
    return 0;
}
