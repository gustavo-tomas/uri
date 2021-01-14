#include <bits/stdc++.h>
using namespace std;

string tolower(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    return s;
}

bool comparator(string a, string b){
    string low_a = tolower(a);
    string low_b = tolower(b);
    if(low_a < low_b) return true;
    if(low_a == low_b){
        if(a < b) return true;
        return false;
    }
    return false;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    vector<string> v;
    string s;
    while(n--){
        cin >> s;
        v.push_back(s);
    }
    
    sort(v.begin(), v.end(), comparator);
    
    for(auto i : v){
        cout << i << endl;
    }
    
    return 0;
}
