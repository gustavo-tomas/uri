#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int total, used, warning, critical;
    while (cin >> total >> used >> warning >> critical){
        double res = (double) used/total * 100;
        if(res >= critical) cout << "critical" << endl;
        else if(res >= warning) cout << "warning" << endl;
        else cout << "OK" << endl;
    }
    
    return 0;
}
