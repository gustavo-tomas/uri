#include <iostream>
using namespace std;

int main() {
 
    int n;
    while(cin >> n && n > 0){
        int t, a=0, b=1;
        while(n--){
            t = a;
            a = b;
            b += t;
        }
        cout << b << endl;
    }
 
    return 0;
}
