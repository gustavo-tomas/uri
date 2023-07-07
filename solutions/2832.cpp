#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, f;
    cin >> n >> f;

    int arr[n + 5];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int l, r, mid, counter;
    l = 0;
    r = 1'000'000'00;

    while (l < r)
    {
        mid = (l + r) / 2;

        counter = 0;
        for (int i = 0; i < n; i++)
            counter += mid / arr[i];

        if (counter >= f)
            r = mid;

        else
            l = mid + 1;
    }

    cout << l << endl;

    return 0;
}
