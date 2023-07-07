#include <bits/stdc++.h>
using namespace std;

#define LL long long int
#define MOD 1'000'000'007

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    LL n, k;
    while (cin >> n >> k)
    {
        LL arr[n + 5];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);

        LL sum = 0;
        for (int i = n - 1; i >= n - k; i--)
            sum = (sum + (arr[i] % MOD)) % MOD;

        cout << sum << "\n";
    }

    return 0;
}
