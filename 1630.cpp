#include <iostream>
using namespace std;
 
int gcd(int a, int b){ 
    return (!a) ? b : gcd(b % a, a);
}
 
int main() {
 
    int l1, l2;
    while(cin >> l1 >> l2){
        cout << ((l1 + l2)*2)/gcd(l1,l2) << endl;
    }
 
    return 0;
}
