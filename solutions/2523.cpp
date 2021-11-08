#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, pos;
    string s;
    while(cin >> s){
        cin >> n;
        while(n--){
            cin >> pos;
            cout << s[pos-1];
        }
        cout << endl;
    }

    return 0;
}
