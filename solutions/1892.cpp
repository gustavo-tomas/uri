#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll, string> pii;

ll my_merge(vector<pii>& arr, vector<pii>& temp, ll l, ll mid, ll r)
{
    ll i, j, k, swaps;

    i = l;
    j = mid;
    k = l;
    swaps = 0;

    while (i <= mid - 1 && j <= r)
    {
        if (arr[i].second < arr[j].second)
            temp[k++] = arr[i++];

        else
        {
            temp[k++] = arr[j++];
            swaps += mid - i;
        }
    }

    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= r)
        temp[k++] = arr[j++];

    for (i = l; i <= r; i++)
        arr[i] = temp[i];

    return swaps;
}

ll my_merge_sort(vector<pii>& arr, vector<pii>& temp, ll l, ll r)
{
    ll swaps = 0;
    if (l < r)
    {
        ll mid = (l + r) / 2;

        swaps += my_merge_sort(arr, temp, l, mid);
        swaps += my_merge_sort(arr, temp, mid + 1, r);

        swaps += my_merge(arr, temp, l, mid + 1, r);
    }

    return swaps;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    while (cin >> n)
    {
        string aux;
        vector<pii> vec, temp(n, make_pair(0, ""));
        for (ll i = 0; i < n; i++)
        {
            cin >> aux;
            vec.push_back({ i, aux });
        }

        ll res = my_merge_sort(vec, temp, 0, n - 1);
        cout << res << "\n";
    }

    return 0;
}
