#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int card, last = 0, stacks = n;
    for (int i = 0; i < n; i++) {
        cin >> card;
        if (last > 0 && card <= last)
            stacks--;
        last = card;
    }
    cout << stacks << endl;

    return 0;
}