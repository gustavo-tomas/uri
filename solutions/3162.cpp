#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n, x[140], y[140], z[140];
    while(cin >> n){
        for(int i=0; i<n; i++){
            cin >> x[i] >> y[i] >> z[i];
        }

        for(int i=0; i<n; i++){
            double closest = 100000008; 
            for(int j=0; j<n; j++){
                if(j != i){
                    double dx = (x[i]-x[j]) * (x[i]-x[j]);
                    double dy = (y[i]-y[j]) * (y[i]-y[j]);
                    double dz = (z[i]-z[j]) * (z[i]-z[j]);
                    double dist = sqrt(dx + dy + dz);
                    closest = min(closest, dist);
                }
            }
            if(closest <= 20) cout << "A" << endl;
            else if(closest > 20 && closest <= 50) cout << "M" << endl;
            else cout << "B" << endl;
        }
    }

    return 0;
}
