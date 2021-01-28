#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    string s;
    vector<string> v;
    
    while(n--){
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    cout << v[k-1] << endl;
   
    return 0;
}
