#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return (!a) ? b : gcd(b % a, a);
}

int main()
{
    int n, q;
    while (cin >> n >> q)
    {
        int a, b, t, v, vet[n];
        for (int i = 0; i < n; i++)
            cin >> vet[i];
        while (q--)
        {
            cin >> t >> a >> b;
            if (t == 1)
            {
                cin >> v;
                for (int i = a - 1; i < b; i++)
                    vet[i] += v;
            }
            else
            {
                int curr_gcd = vet[a - 1];
                for (int i = a - 1; i < b; i++)
                    curr_gcd = gcd(curr_gcd, vet[i]);
                cout << curr_gcd << endl;
            }
        }
    }
    return 0;
}
