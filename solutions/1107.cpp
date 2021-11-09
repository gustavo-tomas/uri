#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, c;
    while(cin >> a >> c && a > 0) {
        int block[c];
        for (int i = 0; i < c; i++) {
            cin >> block[i];
        }
        int last_block = a, count = 0;
        for (int i = 0; i < c; i++) {
            if (block[i] < last_block) {
                count += last_block - block[i];
            }
            last_block = block[i];
        }
        cout << count << endl;
    }
    return 0;
}