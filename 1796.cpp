#include <iostream>
using namespace std;
 
int main() {
 
    int n, count=0, p;
    cin >> n;
    while(n--){
        cin >> p;
        if(p) count--;
        else count++;
    }
    if(count > 0) cout << "Y" << endl;
    else cout << "N" << endl;
 
    return 0;
}
