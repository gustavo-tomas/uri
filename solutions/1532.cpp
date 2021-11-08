#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, v;
    while(cin >> n >> v && (n || v)){
        int sum=0, ok=0;
        for(int i=v, bounce=0; i>=1 && !ok;){
            
            // cout << sum << endl;
            if(sum == n) ok = 1;
            if(sum > n){
                v--;
                i = v;
                bounce = 0;
                sum = 0;
            }
            if(bounce == i){
                i--;
                bounce=0;
            }
            
            sum += i;
            bounce++;
        }
        if(ok) cout << "possivel" << endl;
        else cout << "impossivel" << endl;
    }
    
    return 0;
}
