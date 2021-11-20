#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name, answer, chosen = "";
    map<string, string> names;
    while (cin >> name >> answer && name != "FIM")
    {
        names[name] = answer;
        if (answer == "YES" && chosen.size() < name.size())
            chosen = name;
    }
    for (auto name : names)
        if (name.second == "YES")
            cout << name.first << endl;
    for (auto name : names)
        if (name.second == "NO")
            cout << name.first << endl;
    cout << "\nAmigo do Habay:\n"
         << chosen << endl;
    return 0;
}
