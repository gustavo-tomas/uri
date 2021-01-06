#include <iostream>
using namespace std;
 
int main() {
 
    int n, x, y, a, b;
    cin >> n;
    
    while(n--){
        cin >> x >> y >> a >> b;
        int l1 = min(x,y), l2 = max(x,y);
        int l3 = min(a,b), l4 = max(a,b);
        if(l1 < l3 && l2 < l4)
            cout << "S" << endl;
        else
            cout << "N" << endl;
    }
 
    return 0;
}
