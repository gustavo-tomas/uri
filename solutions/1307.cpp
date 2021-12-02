#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return (!a) ? b : gcd(b % a, a);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        auto num1 = stoull(s1, 0, 2);
        auto num2 = stoull(s2, 0, 2);

        cout << "Pair #" << i << ": ";
        if (gcd(num1, num2) > 1)
            cout << "All you need is love!" << endl;
        else
            cout << "Love is not all you need!" << endl;
    }
    return 0;
}
