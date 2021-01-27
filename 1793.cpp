#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, time[123];
    while(cin >> n && n){
        int total = 0;
        for(int i=0; i<n; i++) cin >> time[i];
        for(int i=0; i<n; i++){
            if(i == 0) total += 10;
            else if(time[i] - time[i-1] < 10){
                total += time[i] - time[i-1];
            }
            else total += 10;
        }
        cout << total << endl;
    }

    return 0;
}
