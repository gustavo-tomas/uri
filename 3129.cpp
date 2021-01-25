#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, fig, repeat = 0;
    cin >> n;
    set<int> coll;
    while(n--){
        cin >> fig;
        if(coll.count(fig)) repeat++;
        else coll.insert(fig);
    }
    cout << coll.size() << endl << repeat << endl;
 
    return 0;
}
