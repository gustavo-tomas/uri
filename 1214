#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t, n;
    while(cin >> t){
        while(t--){
            cin >> n;
            int abv=0;
            double avg=0, sum=0, grades[1234];
            for(int i=0; i<n; i++) cin >> grades[i];
            for(int i=0; i<n; i++) sum += grades[i];
            avg = (double)sum/n;
            
            for(int i=0; i<n; i++){
                if(grades[i] > avg) abv++;
            }
            
            printf("%.3lf%%\n", 100.0 * (double) abv/n);
        }
    }
 
    return 0;
}
