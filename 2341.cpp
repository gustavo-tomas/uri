#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, aux;
    vector<int> v(1000000,0);
    cin >> n >> k;

    for(int i=0; i<n; i++){
        cin >> aux;
        v[aux]++;
    }

    sort(v.begin()+1,v.begin()+k+1);
    cout << v[1] << endl;
    
    return 0;
}
