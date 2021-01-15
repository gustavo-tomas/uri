#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, tag, type, my_tag;
    
    while(cin >> n >> my_tag){
        int count = 0;
        while(n--){
            cin >> tag >> type;
            if(tag == my_tag && !type) count++;
        }
        cout << count << endl;
    }

    return 0;
}
