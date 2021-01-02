#include <bits/stdc++.h>
using namespace std;
#define ULL unsigned long long int

int main() {
 
   ULL n, t;
   cin >> t;
   while(t--){
       cin >> n;
       ULL delta = 1 + 8 * n;
       ULL lines = (-1 + sqrt(delta))/2;
       cout << lines << endl;
   }
    return 0;
}
