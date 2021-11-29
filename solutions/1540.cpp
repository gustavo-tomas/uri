#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        double y1, y2, c1, c2;
        cin >> y1 >> c1 >> y2 >> c2;
        string res = to_string((c2 - c1) / (y2 - y1));

        int s = res.size();
        for (int i = 0; i < s; i++)
        {
            if (res[i] == '.')
            {
                res[i] = ',';
                s = i + 3;
            }
            cout << res[i];
        }
        cout << endl;
    }
    return 0;
}
