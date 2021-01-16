#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, qnt;
    double price, best_price=10000007;
    cin >> n;
    while(n--){
        cin >> price >> qnt;
        double this_price = (double) price*1000/qnt;
        if(this_price < best_price) best_price = this_price;
    }
    cout << fixed << setprecision(2) << best_price << endl;

    return 0;
}
