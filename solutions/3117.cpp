#include <bits/stdc++.h>
using namespace std;

typedef struct struct_t{
    string took;
    string name;
}struct_t;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, k, time, good;
    cin >> n >> k;
    good = n;
    while(n--){
        cin >> time;
        if(time > 0) good--;
    }
    if(good >= k) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
