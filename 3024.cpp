#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int old, n, max_dist, peak, count = 1, most_count = 0;
    cin >> n >> max_dist;
    for(int i=0; i<n; i++){
        cin >> peak;
        if(i == 0) old = peak;
        else if(peak - old <= max_dist){
            count++;
        }
        else count = 1;
        most_count = max(most_count,count);
        old = peak;
    }
    cout << most_count << endl;
   
    return 0;
}
