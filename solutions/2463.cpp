#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, val[51222], largest_sum = -1e6, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> val[i];

    for (int i = 0; i < n; i++)
    {
        sum += val[i];
        largest_sum = max(largest_sum, sum);
        sum = max(sum, 0);
    }
    cout << largest_sum << endl;
    return 0;
}
