#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, num[100005];
    cin >> n;
    for(int i=0; i<n; i++) cin >> num[i];
    for(int i=0; i<n; i++){
        int count=0;
        if(num[i] > 0) count++;
        if(i > 0 && num[i-1] == 1) count++;
        if(i < n-1 && num[i+1] == 1) count++;
        cout << count << endl;
    }

    return 0;
}
