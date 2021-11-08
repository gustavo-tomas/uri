#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, left, right, num[1234];
    cin >> n >> left >> right;

    for(int i=0; i<n; i++) cin >> num[i];

    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = num[i] + num[j];
            if(num[i] != num[j] && sum >= left && sum <= right){
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}
