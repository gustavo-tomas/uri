#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, count=1;
    while(cin >> n && n){
        cout << "Teste " << count << endl;
        cout << (long) pow(2,n)-1 << endl << endl;
        count++;
    }
    
    return 0;
}
