#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    vector<int> v(1234, 0);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        v[x] = 1;
    }
    for (int i = 1; i <= n; i++)
        if (!v[i])
            cout << i << endl;
    return 0;
}
