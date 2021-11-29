#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num;
    while (cin >> n >> num)
    {
        long int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        cout << sum;
        if (sum % 3 == 0)
            cout << " sim" << endl;
        else
            cout << " nao" << endl;
    }
    return 0;
}
