#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double sum=0, count=0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if(i < s.size()-1 && s[i] == '1' && s[i+1] == '0'){
            sum += 10;
            i++;
            count++;
        }
        else{
            sum += s[i]-48;
            count++;
        }
    }
    cout << fixed << setprecision(2) << sum/count << endl;
    
    return 0;
}
