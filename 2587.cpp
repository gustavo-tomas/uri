#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    while(n--){
        string g1, g2, g1_ = "", g2_ = "", word;
        cin >> g1 >> g2 >> word;

        for(int i=0; i<word.size(); i++){
            if(word[i] == '_'){
                g1_ += g1[i];
                g2_ += g2[i];
            }
        }
        if(g1_[0] == g2_[1] || g1_[1] == g2_[0])
            cout << 'Y' << endl;
        else 
            cout << 'N' << endl;
    }

    return 0;
}