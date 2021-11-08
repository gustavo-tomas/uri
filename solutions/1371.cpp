#include <iostream>
using namespace std;
 
int main() {
 
    int n;
    while(cin >> n && n > 0){
        cout << 1; // 1 sempre ativo
        for(long long int i=2; i*i<=n; i++){
            cout << " " << i*i;
        }
        cout << endl;
    }
 
    return 0;
}
