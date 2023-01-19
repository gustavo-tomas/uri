#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    while (cin >> n) {
        vector<int> num(n, 0);
        for (int i = 0; i < n; i++) cin >> num[i];
        sort(num.begin(), num.end());
        
        if (n % 2 != 0) {
            num.erase(num.begin() + n / 2);
            n--;
        }
        
        int sum = 0;
        for (int i = 0; i < n / 2; i++)
            sum += (num[n - i - 1] - num[n / 2 - i - 1]);
            
        cout << sum << "\n";
    }

    return 0;
}
