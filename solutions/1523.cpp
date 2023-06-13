#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    while (cin >> n >> k && n > 0)
    {
        int c, f;
        stack<int> estacionamento;

        int ok = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> c >> f;
            if (!ok)
                continue;

            if (estacionamento.empty())
            {
                estacionamento.push(f);
                continue;
            }

            while (!estacionamento.empty() && estacionamento.top() <= c)
                estacionamento.pop();

            if (!estacionamento.empty() && estacionamento.top() < f)
                ok = 0;

            else if (estacionamento.size() < k)
                estacionamento.push(f);

            else
                ok = 0;
        }

        if (ok)
            cout << "Sim\n";
        else
            cout << "Nao\n";
    }

    return 0;
}
