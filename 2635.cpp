#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;
    while(cin >> n){
        vector<string> searched;
        for(int i=0; i<n; i++){
            string aux;
            cin >> aux;
            searched.push_back(aux);
        }
        
        cin >> q;
        while(q--){
            string search;
            cin >> search;
            int count=0, largest=-1;
            for(int i=0; i<n; i++){
                if (searched[i].find(search) == 0){
                    count++;
                    largest = max(largest, (int) searched[i].size());
                }
            }
            if(count) cout << count << " " << largest << endl;
            else cout << -1 << endl;
        }
    }
    
    return 0;
}
