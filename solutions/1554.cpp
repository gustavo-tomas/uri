#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, t;
    long int x_white, y_white;
    long int x, y;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> x_white >> y_white;
        
        double this_dist, closest = 10000000005;
        int this_index = 1, c_index = 1;
        while(n--){
            cin >> x >> y;
            x = abs(x-x_white)*abs(x-x_white);
            y = abs(y-y_white)*abs(y-y_white);
            this_dist = sqrt(x+y);

            if(this_dist < closest - 0.01){
                closest = this_dist;
                c_index = this_index;
            }
            this_index++;
        }
        cout << c_index << endl;
    }
    return 0;
}
