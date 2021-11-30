#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t;
    cin >> t;

    for (int kkkkk = 1; kkkkk <= t; kkkkk++)
    {
        cin >> n;
        double best_streak = -1, best_avg = -1, test, count, last = -1;

        for (int i = 0; i < n; i++)
        {
            cin >> test;
            if (test == last)
                count++;
            else
                count = 1;
            if (test * count / count > best_avg)
            {
                best_avg = test * count / count;
                best_streak = count;
            }
            else if (test * count / count == best_avg && count >= best_streak)
            {
                best_avg = test * count / count;
                best_streak = count;
            }
            last = test;
        }
        cout << "Caso #" << kkkkk << ": " << best_streak << endl;
    }
    return 0;
}
