#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592654 
 
int main() {
 
    double angle, h_elf, side;
    while(cin >> angle >> side >> h_elf){
        cout << fixed << setprecision(2) << 5.0 * (tan(PI * angle / 180.0) * side + h_elf) << endl;
    }
 
    return 0;
}
