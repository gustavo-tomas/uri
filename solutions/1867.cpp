#include <bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;

string to_char(string s){
    while(s.size() > 1){
        int sum=0;
        for(int i=0; i<s.size(); i++){
            sum += s[i]-48;
        }
        stringstream ss;
        ss << sum;
        s = ss.str();
    }
    return s;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b;
    while(cin >> a >> b && (a != "0" || b != "0")){
        a = to_char(a);
        b = to_char(b);

        if(a > b) cout << 1 << endl;
        else if(a < b) cout << 2 << endl;
        else cout << 0 << endl;
    } 
    
    return 0;
}
