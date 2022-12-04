#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, t;
    cin >> n;
    int queue[n];
    for (int i = 0; i < n; i++) cin >> queue[i];
    
    cin >> m;
    int goners[m];
    for (int i = 0; i < m; i++) cin >> goners[i];
    sort(goners, goners + m);
    
    int first = 1;
    for (int i = 0; i < n; i++) {
        if (!binary_search(goners, goners + m, queue[i])) {
            if (!first) cout << " " << queue[i];
            else cout << queue[i];
            first = 0;
        }
    }
    cout << "\n";    
    
    return 0;
}
