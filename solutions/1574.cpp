#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    string s;
    cin >> t;
    while (t--)
    {
        int pos = 0;
        cin >> n;
        getline(cin, s);
        map<int, string> instruction;
        for (int i = 1; i <= n; i++)
        {
            instruction[i] = s;
            getline(cin, s);
            if (s[0] == 'S')
            {
                cout << instruction[i] << endl;
                instruction[i] = instruction[stoi(s.substr(8)) + 1];
                s = instruction[i];
            }
            if (s == "LEFT")
                pos--;
            else if (s == "RIGHT")
                pos++;
        }
        cout << pos << endl;
    }
    return 0;
}
