#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int s, va, vb;
    while(cin >> s >> va >> vb){
        if(va <= vb) cout << "impossivel" << endl;
        else cout << fixed << setprecision(2) << (double) s/(va-vb) << endl;
    }

    return 0;
}
