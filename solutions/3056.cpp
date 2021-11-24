#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unsigned long long int p = powl(2, n);
    cout << (p+1) * (p+1) << endl;
    return 0;
}
