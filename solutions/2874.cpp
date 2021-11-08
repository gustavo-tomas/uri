#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    while(cin >> n){
        while(n--){
            string bin;
            cin >> bin;
            cout << (char) stoi(bin,nullptr,2);
        }
        cout << endl;
    }
    
    return 0;
}
