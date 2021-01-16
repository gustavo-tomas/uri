#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, count_g=0, count_b=0;
    cin >> n;
    vector<string> v;
    string s;
    char good;

    while(n--){
        cin >> good >> s;
        if(good == '+') count_g++;
        else count_b++;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    for(auto i : v) cout << i << endl;
    cout << "Se comportaram: " << count_g << " | " << "Nao se comportaram: " << count_b << endl;

    return 0;
}
