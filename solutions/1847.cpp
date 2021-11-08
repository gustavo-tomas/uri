#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int first, second, third;
    cin >> first >> second >> third;

    int happy = 0;
    if(first > second){
        if(second-third < first-second){
            happy = 1;
        }
        if(second <= third){
            happy = 1;
        }
    }
    else if(first == second){
        if(third > second){
            happy = 1;
        }
    }
    else{
        if(third-second >= second-first){
            happy = 1;
        }
    }
    if(happy) cout << ":)" << endl;
    else cout << ":(" << endl;
    
    return 0;
}
