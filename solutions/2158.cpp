#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll p, h, counter = 0;
    while (cin >> p >> h)
    {
        // Euler V = A - F + 2
        ll a = (p * 5 + h * 6) / 2;
        ll v = a - (p + h) + 2;

        cout << "Molecula #" << ++counter << ".:.\n";
        cout << "Possui " << v << " atomos e " << a << " ligacoes\n\n";
    }

    return 0;
}
