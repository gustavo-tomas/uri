#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n, bullet[100005];
    string action;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> bullet[i];
        }
        cin >> action;
        int hit = 0;
        for(int i=0; i<action.size(); i++){
            if(bullet[i] <= 2 && action[i] == 'S') hit++; 
            if(bullet[i] > 2 && action[i] == 'J') hit++;
        }
        cout << hit << endl;
    }
    return 0;
}
