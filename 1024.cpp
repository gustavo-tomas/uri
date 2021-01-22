#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    while(cin >> n){
        string s;
        getline(cin, s);

        while(n--){
            getline(cin, s);
            for(int i=0; i<s.size(); i++){
                if(s[i] >= 97 && s[i] <= 122)
                    s[i] += 3;
                else if(s[i] >= 65 && s[i] <= 90)
                    s[i] += 3;
            }
            for(int i=0; i<s.size()/2; i++){
                char temp = s[i];
                s[i] = s[s.size()-i-1];
                s[s.size()-i-1] = temp;
            }
            for(int i=s.size()/2; i<s.size(); i++){
                s[i] -= 1;
            }
            cout << s << endl;
        }
    }

    return 0;
}
