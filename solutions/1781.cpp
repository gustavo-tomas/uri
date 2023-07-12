#include <bits/stdc++.h>
using namespace std;

typedef pair<int, char> pic;

bool cmp(pic a, pic b)
{
    return a.first < b.first;
}

bool is_vowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, q, op, x, instance = 0;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s >> q;

        cout << "Caso #" << ++instance << ":\n";

        string consonants = "", vowels = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (is_vowel(s[i]))
                vowels += s[i];
            else
                consonants += s[i];
        }

        int delta_v = 0, delta_c = 0;
        while (q--)
        {
            cin >> op;
            if (op == 0 || op == 1)
            {
                cin >> x;
                if (op == 0)
                    delta_v += x;

                else
                    delta_c += x;
            }

            else
            {
                vector<pic> vowel_pos, cons_pos;
                for (int i = 0; i < vowels.size(); i++)
                    vowel_pos.push_back({ i, vowels[i] });

                for (int i = 0; i < consonants.size(); i++)
                    cons_pos.push_back({ i, consonants[i] });

                for (int i = 0; i < vowel_pos.size(); i++)
                    vowel_pos[i].first = (vowel_pos[i].first + delta_v) % vowel_pos.size();

                for (int i = 0; i < cons_pos.size(); i++)
                    cons_pos[i].first = (cons_pos[i].first + delta_c) % cons_pos.size();

                sort(vowel_pos.begin(), vowel_pos.end(), cmp);
                sort(cons_pos.begin(), cons_pos.end(), cmp);

                for (int i = 0, j = 0, k = 0; i < s.size(); i++)
                {
                    if (is_vowel(s[i]))
                        cout << vowel_pos[j++].second;
                    else
                        cout << cons_pos[k++].second;
                }
                cout << "\n";
            }
        }
    }

    return 0;
}
