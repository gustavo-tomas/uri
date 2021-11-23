#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q, e, room;
    set<int> visited;
    cin >> q >> e;
    while (e--)
    {
        cin >> room;
        visited.insert(room);
    }
    while (q--)
    {
        cin >> room;
        cout << !visited.count(room) << endl;
        visited.insert(room);
    }
    return 0;
}
