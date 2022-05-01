#include <bits/stdc++.h>
using namespace std;

int main() {

    int r, t = 1;
    while (cin >> r && r) {
        int a = 0, b = 0, c1, c2;
        while (r--) {
            cin >> c1 >> c2;
            a += c1;
            b += c2;
        }
        cout << "Teste " << t << endl;
        if (a > b) cout << "Aldo" << endl;
        else cout << "Beto" << endl;
        cout << endl;
        t++;
    }
    return 0;
}