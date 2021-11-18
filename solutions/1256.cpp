#include <bits/stdc++.h>
using namespace std;

int main() {
    
  int n, m, t, val;
  cin >> n;
  for (int i=0; i<n; i++) {
    map<int, vector<int>> table;
    cin >> m >> t;
    if (i != 0) cout << endl;
    while (t--) {
      cin >> val;
      int key = val % m;
      vector<int> temp = table[key];
      temp.push_back(val);
      table[key] = temp;
    }
    for (int k=0; k<m; k++) {
      cout << k << " -> ";
      for (auto j : table[k]) {
        cout << j << " -> ";
      }
      cout << "\\" << endl;
    }
  }
  return 0;
}
