#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, z, l;
    cin >> h >> z >> l;
    int big = max({h, z, l}), small = min({h, z, l});
    if (h < big && h > small)
        cout << "huguinho" << endl;
    else if (z < big && z > small)
        cout << "zezinho" << endl;
    else
        cout << "luisinho" << endl;
    return 0;
}
