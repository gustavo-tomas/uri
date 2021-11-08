#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    while(cin >> n){
        int vote, total=0, imp=0;
        while(n--){
            cin >> vote;
            if(vote) imp++;
            total++;
        }
        if((double) imp/total >= 2.0/3.0)
            cout << "impeachment" << endl;
        else cout << "acusacao arquivada" << endl;
    }
    
    return 0;
}
