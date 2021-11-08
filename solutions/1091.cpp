#include <bits/stdc++.h>
using namespace std;

#define LL long long int 
#define ULL unsigned long long int 

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x, y, ox, oy;
    while(cin >> n && n){
        cin >> ox >> oy;
        while(n--){
            cin >> x >> y;
            if(x == ox || y == oy) cout << "divisa" << endl;
            else if(x > ox && y > oy) cout << "NE" << endl;
            else if(x < ox && y > oy) cout << "NO" << endl;
            else if(x < ox && y < oy) cout << "SO" << endl;
            else cout << "SE" << endl;
        }
    }
    return 0;
}
