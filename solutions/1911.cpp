#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n && n)
    {
        map<string, string> signature;
        string name, written;
        while (n--)
        {
            cin >> name >> written;
            signature[name] = written;
        }
        int count = 0;
        cin >> m;
        while (m--)
        {
            int dif = 0;
            cin >> name >> written;
            for (int i = 0; i < written.size(); i++)
            {
                if (signature[name][i] != written[i])
                    dif++;
            }
            if (dif > 1)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
