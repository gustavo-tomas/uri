#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        string meat;
        map<int, string> meats;
        while (n--)
        {
            int day;
            cin >> meat >> day;
            meats[day] = meat;
        }
        int first = 1;
        for (auto meat : meats)
        {
            if (!first)
                cout << " ";
            cout << meat.second;
            first = 0;
        }
        cout << endl;
    }
    return 0;
}
