#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string p1, p2;
    int n, v1, v2, test=1;
    while(cin >> n && n){
        cin >> p1 >> p2;
        cout << "Teste " << test << endl;
        while(n--){
            cin >> v1 >> v2;
            if((v1+v2) % 2) cout << p2 << endl;
            else cout << p1 << endl;
        }
        test++;
        cout << endl;
    }

    return 0;
}
