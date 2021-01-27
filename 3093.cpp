#include<bits/stdc++.h>
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
        int card[4] = {0,0,0,0};
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'A') card[0]++;
            if(s[i] == 'J') card[1]++;
            if(s[i] == 'Q') card[2]++;
            if(s[i] == 'K') card[3]++;
        }
        if(card[0] && card[1] && card[2] && card[3]){
            cout << "Aaah muleke" << endl;
        } else {
            cout << "Ooo raca viu" << endl;
        }
    }

    return 0;
}
