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
        int i=1, count=0, count2=0;
        while(s[i++] == 'a') count++;
        i += 2;
        while(s[i++] == 'a') count2++;
        
        cout << "k";
        count = count*count2;
        while(count--) cout << "a";
        cout << endl;
    }

    return 0;
}
