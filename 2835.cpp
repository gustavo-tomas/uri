#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, val;
    vector<int> weight;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> val;
        weight.push_back(val);
    }
    sort(weight.begin(), weight.end());
    
    int ok = 1;
    for(int i=0; i<n-1 && ok; i++){
        if(weight[i+1] - weight[i] > 8 || weight[0] > 8){
            ok = 0;
        }
    }
    
    if(ok) cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}