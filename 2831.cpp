#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, num, last_num=-1;
    cin >> n;

    int flag = 0;
    for(int i=0; i<n; i++){
        cin >> num;
        if(last_num < 0 && num > 8) flag = 1;
        if(last_num > -1 && num - last_num > 8) flag = 1;
        last_num = num;
    }

    if(flag) cout << "N" << endl;
    else cout << "S" << endl;

    return 0;
}
