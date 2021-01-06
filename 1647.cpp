#include <iostream>
using namespace std;
#define ULL unsigned long long int

ULL sum(ULL vet[], int x){
    ULL total=vet[x];
    for(int i=0; i<x; i++) vet[i] += vet[x];
    return total;
}
 
int main() {
 
    int n;
    ULL vet[1234];
    while(cin >> n && n > 0){
        ULL soma=0;
        for(int i=0; i<n; i++) cin >> vet[i];
        
        for(int i=n-1; i>=0; i--){
            soma += sum(vet, i);
        }
        cout << soma << endl;
    }
 
    return 0;
}
