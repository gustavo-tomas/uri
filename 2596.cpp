#include <iostream>
using namespace std;
 
int even(int x){
    int count = 0;
    for(int i=1; i<=x; i++){
        if(x % i == 0) count++;
    }
    if(count % 2 == 0) return 1;
    return 0;
} 
 
int main() {
 
    int t, n;
    cin >> t;
    while(t--){
        int count = 0;
        cin >> n;
        for(int i=1; i<=n; i++){
            if(even(i)) count++;
        }
        cout << count << endl;
    }
 
    return 0;
}
