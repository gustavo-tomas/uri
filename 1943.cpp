#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    while(cin >> n){
        cout << "Top ";
        if(n == 1) cout << 1;
        if(n >= 2 && n <= 3) cout << 3;
        if(n >= 4 && n <= 5) cout << 5;
        if(n >= 6 && n <= 10) cout << 10;
        if(n >= 11 && n <= 25) cout << 25;
        if(n >= 26 && n <= 50) cout << 50;
        if(n >= 51 && n <= 100) cout << 100;
        cout << endl;
    }

    return 0;
}
