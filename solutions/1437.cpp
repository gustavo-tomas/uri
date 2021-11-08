#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    char c;
    while(cin >> n && n){
        char pos = 'N';
        while(n--){
            cin >> c;
            if(c == 'D'){
                if(pos == 'N') pos = 'L';
                else if(pos == 'L') pos = 'S';
                else if(pos == 'S') pos = 'O';
                else if(pos == 'O') pos = 'N';
            }
            else if(c == 'E'){
                if(pos == 'N') pos = 'O';
                else if(pos == 'O') pos = 'S';
                else if(pos == 'S') pos = 'L';
                else if(pos == 'L') pos = 'N';
            }
        }
        cout << pos << endl;
    }   

    return 0;
}
