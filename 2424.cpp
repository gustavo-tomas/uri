#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int x, y;
    cin >> x >> y;
    if(x > 432 || x < 0 || y > 468 || y < 0)
        cout << "fora" << endl;
    else 
        cout << "dentro" << endl;
   
    return 0;
}
