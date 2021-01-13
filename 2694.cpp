#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;

        int a = stoi(s.substr(2, 2));
        int b = stoi(s.substr(5, 3));
        int c = stoi(s.substr(11, 2));
        cout << a+b+c << endl;
    }

    return 0;
}
