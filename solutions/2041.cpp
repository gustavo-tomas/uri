#include <bits/stdc++.h>
using namespace std;

string tres(string num, int n)
{
    string res = "";
    for (int i = 0; i < num.size(); i++)
    {
        int count = 1;
        while (i < num.size() - 1 && num[i] == num[i + 1])
        {
            count++;
            i++;
        }
        res += to_string(count) + num[i];
    }
    if (n > 2)
        return tres(res, n - 1);
    return res;
}

int main()
{
    int n;
    while (cin >> n) {
        if (n <= 1)
            cout << "3" << endl;
        else
            cout << tres("3", n) << endl;
    }
    return 0;
}
