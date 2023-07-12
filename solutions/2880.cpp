#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string message, crib;
    cin >> message >> crib;

    long long int counter = 0;
    for (int i = 0; i <= message.size() - crib.size(); i++)
    {
        bool ok = true;
        for (int j = 0; j < crib.size() && ok; j++)
            if (message[i + j] == crib[j])
                ok = false;

        if (ok)
            counter++;
    }

    cout << counter << "\n";

    return 0;
}
