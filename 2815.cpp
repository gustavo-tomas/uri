#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string str;
    vector<string> strs;
    while(cin >> str){
        if(str.size() >= 4){
            if(str[0] == str[2] && str[1] == str[3]){
                string new_word = str.substr(2);
                strs.push_back(new_word);
            } else {
                strs.push_back(str);
            }
        } else {
            strs.push_back(str);
        }
    }

    for(int i=0; i<strs.size(); i++){
        if(i > 0 && i < strs.size()) cout << " ";
        cout << strs[i];
    }
    cout << endl;

    return 0;
}