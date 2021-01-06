#include <iostream>
using namespace std;
 
int main() {
 
    int b, t;
    cin >> b >> t;
    int trap = (b+t)*35;
    if(trap == 80*70) cout << 0 << endl;
    else if(trap > 80*70) cout << 1 << endl;
    else cout << 2 << endl;
    
    return 0;
}
