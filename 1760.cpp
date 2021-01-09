#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int l;
    while(cin >> l){
        cout << fixed << setprecision(2) << (double) 8.0/5.0 * l * l * sqrt(3)/4.0 << endl;
    }

    return 0;
}
