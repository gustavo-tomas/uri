#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;
    if(b%(b-a) > 0) cout << b/(b-a)+1 << endl;
    else cout << b/(b-a) << endl;
    
    return 0;
}
