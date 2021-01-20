#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, aux;
    vector<int> pequi, worker;
    cin >> n >> k;
    
    for(int i=0; i<n; i++){
        cin >> aux;
        pequi.push_back(aux);
        worker.push_back(0);
    }
    
    while(k--){
        for(int i=0; i<n; i++){
            worker[i] += pequi[i];
        }

        pequi.insert(pequi.begin(),pequi[n-1]);
        pequi.pop_back();
    }
    for(int i=0; i<n; i++){
        cout << worker[i];
        if(i < n-1) cout << " ";
        else cout << endl;
    }
    
    return 0;
}
