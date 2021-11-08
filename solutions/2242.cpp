#include <bits/stdc++.h>
using namespace std;

int main(){
 
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    char s[10004], normal[10004];
    cin >> s;

    int j=0, n = strlen(s);
    for(int i=0; i<n; i++){
        if(s[i] == 'a' || s[i] == 'e'){
            normal[j++] = s[i];
        }
        if(s[i] == 'i' || s[i] == 'o'){
            normal[j++] = s[i];
        }
        if(s[i] == 'u'){
            normal[j++] = s[i];
        }
    }

    
    int ok=1;
    for(int i=0; i<j; i++){
        if(normal[i] != normal[j-i-1]) ok = 0;
    }
    
    if(ok) cout << "S" << endl;
    else cout << "N" << endl;
    
    return 0;
}
