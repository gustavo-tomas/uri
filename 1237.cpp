#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    while (cin >> s1 >> s2)
    {
        int max_match = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            int match = 0;
            for (int j = 0; j < s2.size(); j++)
            {
                int k = i;
                while (k < s1.size() && j < s2.size() &&
                       s1[k] == s2[j])
                {
                    k++;
                    j++;
                    match++;
                }
                max_match = max(max_match, match);
            }
        }
        cout << max_match << endl;
    }
    return 0;
}