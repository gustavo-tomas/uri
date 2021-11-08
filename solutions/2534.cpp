#include <bits/stdc++.h>
using namespace std;

bool decrease(int a, int b){
    return a>b;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, q, grades[100005], pos;
    while(cin >> n >> q){
        for(int i=0; i<n; i++) cin >> grades[i];
        sort(grades,grades+n,decrease);
        for(int i=0; i<q; i++){
            cin >> pos;
            cout << grades[pos-1] << endl;
        }
    }

    return 0;
}
