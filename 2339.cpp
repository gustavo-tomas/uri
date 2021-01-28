#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int c, p, f;
    cin >> c >> p >> f;
    if(p/f >= c) cout << "S" << endl;
    else cout << "N" << endl;
   
    return 0;
}
