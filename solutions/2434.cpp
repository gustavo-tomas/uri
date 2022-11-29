#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, balance, value;
    cin >> n >> balance;
    int worst = balance;
    while (n--) {
        cin >> value;
        balance += value;
        worst = balance < worst ? balance : worst;
    }
    cout << worst << "\n";

    return 0;
}
