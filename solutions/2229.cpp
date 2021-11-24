#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 0;
    while (cin >> n && n >= 0)
    {
        i++;
        cout << "Teste " << i << endl;
        cout << int(pow(1 + pow(2, n), 2)) << endl
             << endl;
    }
    return 0;
}
