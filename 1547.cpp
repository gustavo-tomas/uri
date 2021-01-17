#include <bits/stdc++.h>
using namespace std;

int better(int a, int b){
    return abs(a-b);
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, guess[10000], ans, t;
    cin >> t;
    while(t--){
        cin >> n >> ans;
        for(int i=0; i<n; i++) cin >> guess[i];
        int find=0, best_guess = 100005, index;
        for(int i=0; i<n && !find; i++){
            if(guess[i] == ans){
                find = 1;
                index = i;
                best_guess = guess[i];
            }
            if(!find && better(guess[i], ans) < better(best_guess,ans)){
                best_guess = guess[i];
                index = i;
            }
        }
        cout << index+1 << endl;
        // cout << best_guess << endl;
    }
    return 0;
}
