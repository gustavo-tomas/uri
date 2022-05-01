#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    while (n--) {
        vector<int> b1, b2;
        for (int i = 0; i < 6; i++) {
            int lol;
            cin >> lol;

            if (i < 3) b1.push_back(lol);
            else b2.push_back(lol);
        }
        
        sort(b1.begin(), b1.end());
        sort(b2.begin(), b2.end());

        int res = 0;
        bool cond1 = b1[0] < b2[1] && b1[1] < b2[2];
        bool cond2 = b2[0] < b1[1] && b2[1] < b1[2];

        if (cond1 && !cond2)
            res = 1;
        else if (cond2 && !cond1)
            res = 2;
        else if (cond1 && cond2)
            res = 3;
        else
            res = 0;

        cout << res << endl;
    }
    return 0;
}