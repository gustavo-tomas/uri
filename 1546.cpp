#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, k;
    cin >> n;
    while(n--){
        cin >> k;
        while(k--){
            int feed;
            cin >> feed;
            if(feed == 1) cout << "Rolien" << endl;
            if(feed == 2) cout << "Naej" << endl;
            if(feed == 3) cout << "Elehcim" << endl;
            if(feed == 4) cout << "Odranoel" << endl;
        }
    }

    return 0;
}
