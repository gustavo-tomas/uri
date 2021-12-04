#include <bits/stdc++.h>
using namespace std;

int main()
{
    double m1, m2, m3;
    while (cin >> m1 >> m2 >> m3)
    {
        double a = -1, sm = 0.5 * (m1 + m2 + m3);
        if (sm - m1 >= 0 && sm - m2 >= 0 && sm - m3 >= 0)
            a = 4.0 / 3.0 * sqrt(sm * (sm - m1) * (sm - m2) * (sm - m3));
        if (a <= 0.000)
            a = -1;
        cout << fixed << setprecision(3) << a << endl;
    }
    return 0;
}
