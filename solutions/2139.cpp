#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int months[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int m, d;
    while (cin >> m >> d) {
        int days = months[m] - d;
        for (int i = m + 1; i <= 12; i++) {
            days += months[i];
        }
        days -= 6;
        if (days < 0)
            cout << "Ja passou!\n";
        else if (days == 0)
            cout << "E natal!\n";
        else if (days == 1)
            cout << "E vespera de natal!\n";
        else
            cout << "Faltam " << days << " dias para o natal!\n";
    }

    return 0;
}
