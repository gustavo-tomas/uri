#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, c, count=0;
    cin >> n;
    while(n--){
        cin >> c;
        if(c) count++;
    }
    cout << count << endl;

    return 0;
}
