#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    while (cin >> s)
    {
        int counter = 0;

        map<char, int> reps;
        for (int i = 0; i < 26; i++)
            reps['a' + i] = 0;

        for (int i = 0; i < s.size(); i++)
            reps[s[i]]++;

        int center = 0;
        for (auto& [c, r] : reps)
        {
            if (reps[c] % 2 && !center)
            {
                center = 1;
                r++;
            }

            else if (reps[c] % 2)
            {
                counter++;
                r++;
            }
        }

        cout << counter << "\n";
    }

    return 0;
}
