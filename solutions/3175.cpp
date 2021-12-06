#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, deeds[12340];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> deeds[i];
    sort(deeds, deeds + n);
    int presents = 0, last = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (deeds[i] != last)
            count++;
        presents += count;
        last = deeds[i];
    }
    cout << presents << endl;
    return 0;
}
