#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int door, n, count=0;
    cin >> n;
    while(n--){
        cin >> door;
        if(door != 1) count++;
    }
    cout << count << endl;

    return 0;
}
