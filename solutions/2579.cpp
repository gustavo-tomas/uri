#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int l, c, x, y;
    cin >> l >> c >> x >> y;

    if (c % 2 == 0) {
        if (y % 2 == 0) cout << "Direita\n";
        else cout << "Esquerda\n";
    } 
    else {
        if ((x % 2 == 0 && y % 2 == 0) || 
            (x % 2 != 0 && y % 2 != 0))
            cout << "Direita\n";
        else
            cout << "Esquerda\n";
    }

    return 0;
}
