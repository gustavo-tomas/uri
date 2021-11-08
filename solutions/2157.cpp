#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    while(n--){
        int start, end;
        string one_way, ans;
        cin >> start >> end;
        for(int i=start; i<=end; i++){
            one_way += to_string(i);
        }
        ans = one_way;
        for(int i=one_way.size()-1; i>=0; i--){
            ans += one_way[i];
        }
        cout << ans << endl;
    }

    return 0;
}