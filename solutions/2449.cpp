#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, pins[1234], sum = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
        cin >> pins[i];
    for (int i = 0; i < n - 1; i++)
    {
        int dif = h - pins[i];
        pins[i] += dif;
        pins[i + 1] += dif;
        sum += abs(dif);
    }
    cout << sum << endl;
    return 0;
}
