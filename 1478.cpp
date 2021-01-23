#include <bits/stdc++.h>
using namespace std;

int main(){
 
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int n;
    while(cin >> n && n){
        int desl = 0, temp, val;

        for(int i=1; i<=n; i++){
            temp = desl;
            for(int j=1; j<=n; j++){
                if(temp > 0) val = i - j + 1;
                else val = j - desl;
                
                if(j == 1) printf("%3d", val);
                else printf(" %3d", val);
                temp--;
            }
            cout << endl;
            desl++;
        }
        cout << endl;
    }
    
    return 0;
}
