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
        sort(s.begin(), s.end());
        
        do{
            cout << s << endl;
        }while(next_permutation(s.begin(),s.end()));
        
        cout << endl;
    }

    return 0;
}
