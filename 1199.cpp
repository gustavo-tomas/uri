#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    string s;
    while(cin >> s && s != "-1"){
        int num;
        num = stoi(s,nullptr,0);
        if(s.size() > 1 && s[1] == 'x'){
            cout << num << endl;
        } else {
            printf("0x%X\n", num);
        }
    }
 
    return 0;
}
