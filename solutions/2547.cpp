#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, hmin, hmax, hcurr;
    while (cin >> n >> hmin >> hmax){
        int count = 0;
        while(n--){
            cin >> hcurr;
            if(hcurr >= hmin && hcurr <= hmax) count++;
        }
        cout << count << endl;
    }

    return 0;
}
