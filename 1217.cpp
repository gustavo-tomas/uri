#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double total_price = 0, total_kg = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        double price, kg = 1;
        cin >> price;
        string line;
        getline(cin, line);
        getline(cin, line);

        for (int j = 0; j < line.size(); j++)
        {
            if (line[j] == ' ')
                kg++;
        }
        printf("day %d: %.0lf kg\n", i, kg);
        total_kg += kg;
        total_price += price;
    }
    printf("%.2lf kg by day\n", total_kg / n);
    printf("R$ %.2lf by day\n", total_price / n);
    return 0;
}