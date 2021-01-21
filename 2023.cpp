#include <bits/stdc++.h>
using namespace std;

string tolower(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    return s;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string name, lower_name="AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    while(getline(cin,name)){
        if(tolower(name) > tolower(lower_name)) lower_name = name;
    }
    cout << lower_name << endl;
    
    return 0;
}
