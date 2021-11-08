#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, min_l, min_s, max_l, max_s;
    cin >> n >> min_l >> max_l >> min_s >> max_s;
    if(n >= min_l && n <= max_l && n >= min_s && n <= max_s)
        cout << "possivel" << endl;
    else
        cout << "impossivel" << endl;

    return 0;
}
