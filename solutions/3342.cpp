#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count;
    cin >> n;
    count = n * n / 2;
    if (n % 2)
        count++;
    cout << count << " casas brancas";
    cout << " e " << n * n - count << " casas pretas" << endl;
    return 0;
}
