#include <bits/stdc++.h>
using namespace std;

string tolower(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    return s;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    string s;
    
    getline(cin, s);
    while(n--){
        getline(cin,s);
        s = tolower(s);

        int alphabet[26], maxv = -1;
        for(int i=0; i<26; i++) alphabet[i] = 0;
        for(int i=0; i<s.size(); i++){
            for(int j=97; j<=122; j++){
                if(s[i] == j && s[i] >= 'a' && s[i] <= 'z'){
                    alphabet[j-97]++;
                    if(alphabet[j-97] > maxv) maxv = alphabet[j-97];
                }
            }
        }
    
        int k=0;
        string res;
        for(int i=0; i<26; i++){
            if(alphabet[i] == maxv) res[k++] = i+97;
        }
        
        sort(res.begin(), res.end());
    
        for(int i=0; i<k; i++){
            cout << res[i];
        }
        cout << endl;
    }
    
    return 0;
}
