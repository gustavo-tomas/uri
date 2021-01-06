#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int i=1, r, w, l;
    while(cin >> r >> w >> l && r > 0){
        cout << "Pizza " << i << " ";
        int d = ceil(sqrt(w*w + l*l));
        
        if(2*r >= d) cout << "fits on the table." << endl;
        else cout << "does not fit on the table." << endl;
        i++;
    }
    return 0;
}
