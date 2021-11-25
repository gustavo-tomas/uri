#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    while (cin >> n >> k && n)
    {
        map<int, int> freq;
        while (n--)
        {
            int num;
            cin >> num;
            if (freq.count(num))
                freq[num]++;
            else
                freq[num] = 1;
        }
        int count = 0;
        for (auto i : freq)
        {
            if (i.second >= k)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
