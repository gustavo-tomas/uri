#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b, u;
    while (cin >> b >> u)
        cout << max(abs(b - u) - 1, 0) << endl;
    return 0;
}
