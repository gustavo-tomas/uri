#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll my_merge(vector<int>& arr, vector<int>& temp, ll l, ll mid, ll r)
{
    ll i, j, k, swaps;

    i = l;
    j = mid;
    k = l;
    swaps = 0;

    while (i <= mid - 1 && j <= r)
    {
        if (arr[i] > arr[j])
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

ll my_merge_sort(vector<int>& arr, vector<int>& temp, ll l, ll r)
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

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    while (cin >> n)
    {
        int aux;
        vector<int> v, temp(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> aux;
            v.push_back(aux);
        }

        auto swaps = my_merge_sort(v, temp, 0, n - 1);
        cout << swaps << "\n";
    }

    return 0;
}
