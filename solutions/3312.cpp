#include <bits/stdc++.h>
#define MAX 500
using namespace std;

int prime(int x)
{
    if (x == 1)
        return 0;
    if (x % 2 == 0)
        return (x == 2) ? 1 : 0;
    for (int i = 3; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int multiply(int x, int res[], int res_size)
{
    int carry = 0;
    for (int i = 0; i < res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

// https://www.geeksforgeeks.org/factorial-large-number/
void fat(int n)
{
    int res[MAX], res_size = 1;
    res[0] = 1;

    for (int x = 2; x <= n; x++)
        res_size = multiply(x, res, res_size);

    for (int i = res_size - 1; i >= 0; i--)
        cout << res[i];
    cout << endl;
}

int main()
{
    int n, num;
    cin >> n;
    while (n--)
    {
        cin >> num;
        if (prime(num))
        {
            cout << num << "! = ";
            fat(num);
        }
    }
    return 0;
}
