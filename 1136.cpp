#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, b;
    while(cin >> n >> b && n){
        int ball, pos, busted = 0;
        vector<int> curr, sequence(n+5,-1);
        for(int i=0; i<b; i++){
            cin >> ball;
            sequence[ball] = ball;
            curr.push_back(ball);
            for(int j=i-1; j>=0; j--){
                pos = abs(curr[i]-curr[j]);
                if(pos <= n) sequence[pos] = pos;
            }
        }
        for(int i=0; i<=n && !busted; i++){
            if(sequence[i] < 0) busted = 1;
        }
        if(busted) cout << 'N' << endl;
        else cout << 'Y' << endl;
    }
    return 0;
}