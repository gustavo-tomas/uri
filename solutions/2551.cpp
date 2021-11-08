#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, this_time, this_dist;
    while(cin >> n){
        double best=-1;
        int counter=1;
        while(n--){
            cin >> this_time >> this_dist;
            if((double) this_dist/this_time > best){
                best = (double) this_dist/this_time;
                cout << counter << endl;
            }
            counter++;
        }
    }
    
    return 0;
}
