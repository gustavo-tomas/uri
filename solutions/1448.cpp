#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string y_u_do_this_cpp;
    cin >> n;
    getline(cin, y_u_do_this_cpp);
    for (int k = 1; k <= n; k++)
    {
        int f1 = -1, f2 = -1, count1 = 0, count2 = 0;
        string original, s1, s2;
        getline(cin, original);
        getline(cin, s1);
        getline(cin, s2);

        for (int i = 0; i < original.size(); i++)
        {
            if (s1[i] == original[i])
                count1++;
            if (s2[i] == original[i])
                count2++;
            if (f1 < 0 && s1[i] == original[i] && s2[i] != original[i])
                f1 = i;
            if (f2 < 0 && s2[i] == original[i] && s1[i] != original[i])
                f2 = i;
        }

        cout << "Instancia " << k << endl;
        if (count1 > count2)
            cout << "time 1" << endl;
        else if (count1 < count2)
            cout << "time 2" << endl;
        else if (f1 < f2)
            cout << "time 1" << endl;
        else if (f1 > f2)
            cout << "time 2" << endl;
        else
            cout << "empate" << endl;
        cout << endl;
    }
    return 0;
}
