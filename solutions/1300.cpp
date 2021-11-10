#include <bits/stdc++.h>
using namespace std;
 
int main() {

    int ang;
    while (cin >> ang) {
        if (ang % 2 == 0 && ang % 3 == 0) {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }
    return 0;
}
