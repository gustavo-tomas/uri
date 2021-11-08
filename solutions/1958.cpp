#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long double x;
    string s;
    cin >> s;
    
    stringstream(s) >> x;
    if(s[0] != '-') cout << "+";
    cout << scientific << setprecision(4) << setiosflags(ios::uppercase) << x << endl;
    
    return 0;
}
