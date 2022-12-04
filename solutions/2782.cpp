#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    int seq[n], count = 0, last_diff = 2'000'007;
    
    for (int i = 0; i < n; i++) {
        cin >> seq[i];
        if (i > 0) {
            if (seq[i-1] - seq[i] != last_diff)
                count++;
            last_diff = seq[i-1] - seq[i];
        }
    }
    if (!count) count = 1;
    cout << count << "\n";

    return 0;
}
