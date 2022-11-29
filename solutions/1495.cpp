#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return (a.first - a.second) > (b.first - b.second);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, g;
    while (cin >> n >> g) {
        int s, r;
        vector<pair<int, int>> goals;
        for (int i = 0; i < n; i++) {
            cin >> s >> r;
            goals.push_back(make_pair(s, r));
        }

        int points = 0;
        sort(goals.begin(), goals.end(), cmp);
        for (int i = 0; i < n; i++) {
            if (goals[i].first <= goals[i].second && g > 0) {
                g -= goals[i].second - goals[i].first + 1;
                if (g >= 0)
                    goals[i].first += goals[i].second - goals[i].first + 1;
                else if (g == -1) {
                    goals[i].first += goals[i].second - goals[i].first;
                    g = 0;
                }
            }

            if (goals[i].first == goals[i].second) points++;
            else if (goals[i].first > goals[i].second) points += 3;
        }
        cout << points << "\n";
    }

    return 0;
}
