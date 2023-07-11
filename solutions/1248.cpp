#include <bits/stdc++.h>
using namespace std;

bool eat_this(string& str, string eat)
{
    sort(str.begin(), str.end());
    sort(eat.begin(), eat.end());

    bool ok = true;
    for (auto& c : eat)
    {
        int idx = str.find(c), on_plan = false;
        while (idx != string::npos)
        {
            on_plan = true;
            str.erase(str.begin() + idx);
            idx = str.find(c);
        }

        if (!on_plan)
        {
            ok = false;
            break;
        }
    }

    return ok;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string diet, first, second;
    getline(cin, diet);

    while (n--)
    {
        diet = first = second = "";
        getline(cin, diet, '\n');
        getline(cin, first, '\n');
        getline(cin, second, '\n');

        if (!eat_this(diet, first + second))
            cout << "CHEATER\n";
        else
            cout << diet << "\n";
    }

    return 0;
}
