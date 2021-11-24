#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    while (cin >> num)
    {
        int most_freq, freq = 0;
        vector<int> digit(10, 0);
        for (int i = 0; i < num.size(); i++)
            digit[int(num[i])-48]++;
        for (int i = 0; i < 10; i++)
        {
            if (digit[i] >= freq)
            {
                most_freq = i;
                freq = digit[i];
            }
        }
        cout << most_freq << endl;
    }
    return 0;
}
