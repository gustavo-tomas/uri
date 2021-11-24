#include <bits/stdc++.h>
using namespace std;

int soma(int num)
{
    unsigned long long int sum = 0;
    while (num > 0)
    {
        sum += (num % 10) * (num % 10);
        num /= 10;
    }
    return sum;
}

int happy(int num)
{
    int orig = num;
    set<int> visited;
    while (!visited.count(num) && num != 1)
    {
        visited.insert(num);
        num = soma(num);
    }
    return num == 1 ? 1 : 0;
}

int main()
{
    int n, num, count = 0;
    cin >> n;
    while (n--)
    {
        cin >> num;
        if (happy(num))
            count++;
    }
    cout << count << endl;
    return 0;
}
