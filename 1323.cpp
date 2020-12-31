#include <iostream>
using namespace std;
 
int main() {
 
    int n;
    while(cin >> n && n > 0){
        long long int soma=0;
        while(n > 0){
            soma += n*n;
            n--;
        }
        cout << soma << endl;
    }
 
    return 0;
}
