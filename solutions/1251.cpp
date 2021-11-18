#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> sort_f(vector<pair<int, int>> v, int pos) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size() - i - 1; j++) {
            if ((pos == 1 && v[j].first < v[j + 1].first) ||
                pos == 2 && v[j].second > v[j + 1].second)
            {
                auto t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
            }
        }
    }
    return v;
}

int main() {

    string line;
    int first = 1;
    while (getline(cin, line)) {
        map<int, int> freq;
        for (auto i : line) {
            if (freq.count(i)) {
                freq[i]++;
            } else {
                freq[i] = 1;
            }
        }
        vector<pair<int, int>> freq_v;
        copy(freq.begin(), freq.end(), back_inserter<vector<pair<int, int>>>(freq_v));
        auto sorted_freq = sort_f(freq_v, 1);
        sorted_freq = sort_f(sorted_freq, 2);

        if (!first)
            cout << endl;
        for (auto i : sorted_freq) {
            cout << i.first << " " << i.second << endl;
        }
        first = 0;
    }
    return 0;
}