#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    while(n--){
        int a, b;
        char c;
        cin >> a >> c >> b;

        if(a == b) cout << a*b << endl;
        else if(c >= 'A' && c <= 'Z') cout << b-a << endl;
        else cout << a+b << endl;
    }
 
    return 0;
}
