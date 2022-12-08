#include <bits/stdc++.h>
using namespace std;

int prime(int x) {
    if (x == 1) return 0;
    if (x % 2 == 0) return (x == 2) ? 1 : 0;   
    for (int i = 3; i * i <= x; i++) if (x % i == 0) return 0;
    return 1;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    while (cin >> n) {
        int coins[n], jump;
        for (int i = 0; i < n; i++) cin >> coins[i];
        cin >> jump;

        int pos = n - 1, count = 0;
        while (pos >= 0) {
            count += coins[pos];
            pos -= jump;
        }

        if (prime(count)) 
            cout << "You’re a coastal aircraft, Robbie, a large silver aircraft.\n";
        else
            cout << "Bad boy! I’ll hit you.\n";
    }

    return 0;
}
