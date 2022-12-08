#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // fiz mesmo to nem ai
    int t, n, kkkkk[14] = { 0, 6, 12, 90, 360, 2040, 10080, 54810, 290640, 1588356, 8676360, 47977776, 266378112, 1488801600 };
    cin >> t;
    while (t--) {
        cin >> n;
        cout << kkkkk[n - 1] << "\n";
    }

    return 0;
}
