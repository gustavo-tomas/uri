#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int count=1, n, num[100005], greater_count=1;
    cin >> n;
    for(int i=0; i<n; i++) cin >> num[i];
    for(int i=0; i<n-1; i++){
        if(num[i] == num[i+1]) count++;
        else count = 1;
        greater_count = max(count, greater_count);
    }
    cout << greater_count << endl;

    return 0;
}
