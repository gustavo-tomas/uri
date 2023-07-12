#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    while (getline(cin, s))
    {
        for (int i = s.size() - 1; i > 0; i--)
        {
            if (s[i - 1] == ' ' && (s[i] == ',' || s[i] == '.'))
            {
                s.erase(i - 1, 1);
                i--;
            }
        }

        cout << s << "\n";
    }

    return 0;
}
