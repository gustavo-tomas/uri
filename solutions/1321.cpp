#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int sis[3], son[3] = {0,0,0};
    while (cin >> sis[0] >> sis[1] >> sis[2] >> son[0] >> son[1] && sis[0] > 0) {
        son[2] = 0;
        sort(sis, sis + 3);
        sort(son, son + 3);
        
        if (son[1] < sis[1] && son[2] < sis[2]) {
            cout << "-1" << endl;
        } 
        else {
            int card;
            // lose to middle card
            if (son[1] < sis[1]) {
                card = (sis[2] + 1) % 53;
            }
            // lose to last card
            else if (son[1] < sis[2]) {
                card = (sis[1] + 1) % 53;
            }
            // dont lose to either
            else {
                card = 1;
            }
            // card already in sons or sis hand
            while (son[1] == card || son[2] == card
            || sis[0] == card || sis[1] == card || sis[2] == card) {
                card = (card + 1) % 53;
            }
            if (card == 0)
                card = -1;
            cout << card << endl;
        }
    }
    return 0;
}
