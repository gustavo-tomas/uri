#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, total_time = 10, time[1234];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> time[i];
    for (int i = 1; i < n; i++)
    {
        int dif = time[i] - time[i - 1];
        if (dif > 10)
            total_time += 10;
        else
            total_time += dif;
    }
    cout << total_time << endl;
    return 0;
}
