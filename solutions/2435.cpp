#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num1, d1, v1, num2, d2, v2;
    cin >> num1 >> d1 >> v1;
    cin >> num2 >> d2 >> v2;
    if((double) d1/v1 > (double) d2/v2) cout << num2 << endl;
    else cout << num1 << endl;
    
    return 0;
}
