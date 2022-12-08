#include <bits/stdc++.h>
using namespace std;

int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string f, c;
    while (cin >> f) {
        cin >> c;
        f = "0" + f + "0";
        c = "0" + c + "0";

        stringstream ss(f), sr(c);
        string segment;
        vector<string> num, cutoff;

        while(getline(ss, segment, '.'))
            num.push_back(segment);

        while(getline(sr, segment, '.'))
            cutoff.push_back(segment);

        if (num.size() == 1) {
            num.push_back("0");
            num[0] = num[0].substr(0, num[0].size() - 1);
        }

        int integer = stoi(num[0]);
        string frac = num[1], cut = cutoff[1];

        if (frac > cut) cout << integer + 1 << "\n";
        else cout << integer << "\n";
    }

    return 0;
}
