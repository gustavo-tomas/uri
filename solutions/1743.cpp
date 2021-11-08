#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int x[5], y[5];
    for(int i=0; i<5; i++) cin >> x[i];
    for(int i=0; i<5; i++) cin >> y[i];
    for(int i=0; i<5; i++){
        if(x[i] == y[i]) {cout << "N" << endl; return 0;}
    }
    cout << "Y" << endl;

    return 0;
}
