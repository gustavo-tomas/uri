#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    while(n--){
        string letter;
        cin >> letter;
        cout << char(stoi(letter,nullptr,16));
    }
    cout << endl;

    return 0;
}
