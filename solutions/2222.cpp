#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<set<int>> v; 
        while (n--) {
            int m;
            cin >> m;
            set<int> temp;
            while (m--) {
                int x;
                cin >> x;
                temp.insert(x); 
            }
            v.push_back(temp);
        }
        int q;
        cin >> q;
        while (q--) {
            int op, s1, s2;
            cin >> op >> s1 >> s2;
            s1 -= 1;
            s2 -= 1;
            vector<int> res(500);
            vector<int>::iterator it, ls;

            if (op == 1) {
                ls = set_intersection(v[s1].begin(), v[s1].end(), 
                    v[s2].begin(), v[s2].end(), res.begin());
            }
            else {
                ls = set_union(v[s1].begin(), v[s1].end(), 
                    v[s2].begin(), v[s2].end(), res.begin());
            }

            cout << ls - res.begin() << "\n";
        }
    }
 
    return 0;
}
