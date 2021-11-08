#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int ok, n, count = 0;
    cin >> n;
    while(n--){
        ok = 1;
        string s;
        cin >> s;
        for(int i=0; i<s.size()-1; i++){
            if(s[i] == 'C' && s[i+1] == 'D')
                ok = 0;
        }
        if(ok) count++;
    }
    cout << count << endl;
 
    return 0;
}
