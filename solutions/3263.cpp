#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ok = 1;
    string s1, s2;
    cin >> n >> s1 >> s2;
    if (n % 2 == 0)
    {
        if (s1 != s2)
            ok = 0;
    }
    else
        for (int i = 0; ok && i < s1.size(); i++)
            if (s1[i] == s2[i])
                ok = 0;
    if (ok)
        cout << "Deletion succeeded" << endl;
    else
        cout << "Deletion failed" << endl;
    return 0;
}
