#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, k;
    cin >> n;
    string s;
    vector<string> v;

    while(n--){
        cin >> k;
        while(k--){
            cin >> s;
            v.push_back(s);
        }

        sort(v.begin(), v.end());
        
        int flag = 0;
        for(int i=0; i<v.size()-1; i++){
            if(v[i] != v[i+1]) flag = 1;
        }
        
        if(!flag) cout << v[0] << endl;
        else cout << "ingles" << endl;
        v.clear();
    }

    return 0;
}
