#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, num[1234];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    int count = 1, most = 0;
    for(int i=0; i<n; i++){
        if(num[i] != num[i+1]) count++;
        most = max(most, count);
    }
    cout << most-1 << endl; 

    return 0;
}
