#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n && n)
    {
        int is_function = 1, is_invertible = 1;
        map<string, string> function, count;
        while (n--)
        {
            string x, y, arrow;
            cin >> x >> arrow >> y;

            if (function[x].size() > 0)
                is_function = 0;
            if (count.count(y))
                is_invertible = 0;
            function[x] = y;
            count[y] = 1;
        }
        if (!is_function)
            cout << "Not a function." << endl;
        else if (is_invertible)
            cout << "Invertible." << endl;
        else if (!is_invertible)
            cout << "Not invertible." << endl;
    }
    return 0;
}
