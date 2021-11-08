#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, top_card, lim, stack[100005];
    cin >> n >> top_card >> lim;
    
    for(int i=0; i<n-1; i++){
        cin >> stack[i];
    }

    int a=0, b=0, turn=0;
    for(int i=0; i<n-1; i++){
        if(abs(stack[i]-top_card) <= lim){
            if(!turn) a += abs(stack[i]-top_card);
            else b += abs(stack[i]-top_card);
            top_card = stack[i];
        }
        turn = !turn;
    }
    cout << a << " " << b << endl;

    return 0;
}
