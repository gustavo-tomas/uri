#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    while(cin >> n && n){
        while(n--){
            int q, ans;
            int mark = 0;
            
            for(int i=0; i<5; i++){
                cin >> q;
                if(q <= 127){
                    mark++;
                    ans = i;
                }
            }
            
            if(mark != 1) cout << "*" << endl;
            else cout << (char) ('A' + ans) << endl;
        }
    }
    return 0;
}
