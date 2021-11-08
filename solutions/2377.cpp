#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int road, stop, cost_km, cost_stop;
    cin >> road >> stop >> cost_km >> cost_stop;
    cout << road * cost_km + ((road/stop) * cost_stop) << endl;
   
    return 0;
}
