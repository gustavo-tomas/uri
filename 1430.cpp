#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    while (cin >> s && s != "*"){
        int count = 0, sum = 0;
        for(int i=1; i<s.size(); i++){
            if(s[i] == 'W') sum += 64;
            if(s[i] == 'H') sum += 32;
            if(s[i] == 'Q') sum += 16;
            if(s[i] == 'E') sum += 8; 
            if(s[i] == 'S') sum += 4;
            if(s[i] == 'T') sum += 2;
            if(s[i] == 'X') sum += 1;
            if(s[i] == '/'){
                if(sum == 64) count++;
                sum = 0;
            }
        }
        cout << count << endl;
    }
    return 0;
}
