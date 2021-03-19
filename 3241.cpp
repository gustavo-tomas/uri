#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s[0] == 'P')
            cout << "skipped" << endl;
        else{
            int i, num = 0, num2 = 0, pot = 1;
            for(i=s.size()-1; i>=0 && s[i] != '+'; i--){
                num += (s[i]-48) * pot;
                pot *= 10;
            }
            
            pot = 1;
            i-=1;
            
            for(; i>=0; i--){
                num2 += (s[i]-48) * pot;
                pot *= 10;
            }
            cout << num+num2 << endl;
        }
    }
 
    return 0;
}
