#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int l, c;
    cin >> l >> c;
    cout << (l*c)+(l-1)*(c-1) << endl;
    cout << 2*(l-1)+2*(c-1) << endl;

    return 0;
}
