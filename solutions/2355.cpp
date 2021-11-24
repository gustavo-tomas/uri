#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    while (cin >> n && n)
    {
        double bra = n / 90.0, ale = 7.0 * n / 90.0;
        printf("Brasil %.0f x Alemanha %.0f\n", floor(bra), ceil(ale));
    }
    return 0;
}
