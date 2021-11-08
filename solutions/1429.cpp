#include <iostream>
using namespace std;
#define ULL unsigned long long int 
 
ULL fat(ULL n){
    if(n == 0 || n == 1) return 1;
    return n * fat(n-1);
} 
 
int main() {
 
    ULL n;
    while(cin >> n && n > 0){
        ULL cont = 1, sum = 0;
        while(n > 0){
            int dig = n % 10;
            sum += fat(cont) * dig;
            n /= 10;
            cont++;
        }
        // cout << fat(n) << endl;
        cout << sum << endl;
    }
    return 0;
}
