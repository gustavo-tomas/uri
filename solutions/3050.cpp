#include <bits/stdc++.h>
using namespace std;
#define ULL unsigned long long int

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, block[200001], max_dist=-1;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> block[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int dist = block[i]+block[j]+(j-i);
            max_dist = max(dist,max_dist);
        }
    }
    cout << max_dist << endl;
    
    return 0;
}
