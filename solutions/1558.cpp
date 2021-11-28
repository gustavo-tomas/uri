#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int x = 0;
        int y = floor(sqrt(n));
        string ans = "NO";
        while (x <= y && ans == "NO")
        {
            if (x * x + y * y < n)
                x++;
            else if (x * x + y * y > n)
                y--;
            else
                ans = "YES";
        }
        cout << ans << endl;
    }
    return 0;
}
