#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        if(s.size() != 8 || s[3] != '-') cout << "FAILURE" << endl;
        else if(s[0] < 65 || s[0] > 90) cout << "FAILURE" << endl;
        else if(s[1] < 65 || s[1] > 90) cout << "FAILURE" << endl;
        else if(s[2] < 65 || s[2] > 90) cout << "FAILURE" << endl;
        else if(s[4] < 48 || s[4] > 57) cout << "FAILURE" << endl;
        else if(s[5] < 48 || s[5] > 57) cout << "FAILURE" << endl;
        else if(s[6] < 48 || s[6] > 57) cout << "FAILURE" << endl;
        else if(s[7] < 48 || s[7] > 57) cout << "FAILURE" << endl;
        else {
            if(s[7] == '1' || s[7] == '2') cout << "MONDAY" << endl;
            else if(s[7] == '3' || s[7] == '4') cout << "TUESDAY" << endl;
            else if(s[7] == '5' || s[7] == '6') cout << "WEDNESDAY" << endl;
            else if(s[7] == '7' || s[7] == '8') cout << "THURSDAY" << endl;
            else if(s[7] == '9' || s[7] == '0') cout << "FRIDAY" << endl;
        }
    }
    
    return 0;
}
