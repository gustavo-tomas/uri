#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, num, count=1;
    while(cin >> n && n){
        cout << "Teste " << count++ << endl;
        for(int i=1; i<=n; i++){
            cin >> num;
            if(num == i) cout << i << endl;
        }
        cout << endl;
    }
   
    return 0;
}
