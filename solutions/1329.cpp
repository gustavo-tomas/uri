#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, mary, john, in;
    while(cin >> n && n){
        mary = 0;
        john = 0;
        while(n--){
            cin >> in;
            if(in) john++;
            else mary++;
        }
        cout << "Mary won " << mary << " times and John won";
        cout << " " << john << " times" << endl;
    }

    return 0;
}
