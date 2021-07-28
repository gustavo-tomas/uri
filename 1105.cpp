#include <bits/stdc++.h>
using namespace std;

int main(){

    int b, n;
    while(cin >> b >> n && b > 0){
        int money[100], fricked = 0;
        for(int i=1; i<=b; i++) cin >> money[i];
        for(int i=1; i<=n; i++){
            int mother_fricker, mother, fricks;
            cin >> mother_fricker >> mother >> fricks;
            money[mother_fricker] -= fricks;
            money[mother] += fricks;
        }
        for(int i=1; i<=b && !fricked; i++){
            if(money[i] < 0) fricked = 1;
        }
        if(fricked)
            cout << 'N' << endl;
        else 
            cout << 'S' << endl;
    }
    return 0;
}