#include <bits/stdc++.h>
using namespace std;
 
string prime(long int x){
    for(int i=2; i<sqrt(x); i++){
        if(x % i == 0) return "Not Prime";
    }
    return "Prime";
} 
 
int main() {
 
    long int n, x; 
    cin >> n;
    while(n--){
        cin >> x;
        cout << prime(x) << endl;
    }
    return 0;
}
