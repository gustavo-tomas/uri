#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string vogal, phrase;
    while(cin >> vogal){
        getline(cin,phrase);
        getline(cin,phrase);
        
        int count=0;
        for(int i=0; i<vogal.size(); i++){
            for(int j=0; j<phrase.size(); j++){
                if(vogal[i] == phrase[j]) count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
