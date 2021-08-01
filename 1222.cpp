#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, c;
    while (cin >> n >> l >> c)
    {
        int count = 0, lines = 1, pages = 1;
        string text;
        for (int i = 0; i < n; i++)
        {
            cin >> text;
            count += text.size();
            if (count > c)
            {
                count = text.size();
                lines++;
            }
            if (count + 1 <= c)
                count++;
            if (lines > l)
            {
                lines = 1;
                pages++;
            }
        }
        cout << pages << endl;
    }
    return 0;
}