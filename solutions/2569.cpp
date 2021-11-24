#include <bits/stdc++.h>
using namespace std;

int check7(int num)
{
    int res = 0, output[12345], i = 0;
    while (num > 0)
    {
        if (num % 10 == 7)
            output[i++] = 0;
        else
            output[i++] = num % 10;
        num /= 10;
    }
    for (int d = i - 1; d >= 0; d--)
        res = res * 10 + output[d];
    return res;
}

int main()
{
    int a, b, res;
    char op;
    cin >> a >> op >> b;
    a = check7(a);
    b = check7(b);

    if (op == '+')
        res = a + b;
    else
        res = a * b;

    res = check7(res);
    cout << res << endl;
    return 0;
}
