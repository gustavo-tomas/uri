#include <bits/stdc++.h>
using namespace std;
#define LL long long int

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    while(cin >> n && n){
        vector<LL> v;
        LL aux;
        while(n--){
            cin >> aux;
            v.push_back(aux); 
        }
        
        sort(v.begin(), v.end());
        
        for(int i=0; i<v.size();){
            if(i == v.size()-1 || v[i] != v[i+1]){
                cout << v[i] << endl;
                break;
            }
            else{
                i += 2;
            }
        }
    }

    return 0;
}
