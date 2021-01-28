#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    while(cin >> n){
        string space, end, tree = "*";
        for(int i=1; i<=n/2; i++) space += " ";
        end = space;

        for(int i=1; i<=n; i+=2){
            cout << space << tree << endl;
            space.erase(0,1);
            tree += "**";
        }
        cout << end + "*" + "\n";
        end.erase(0,1);
        cout << end + "***" + "\n" + "\n";
    }
    
    return 0;
}
