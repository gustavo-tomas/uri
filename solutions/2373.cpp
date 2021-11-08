#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int sum = 0, n, can, cup;
    cin >> n;
    while(n--){
        cin >> can >> cup;
        if(can > cup) sum += cup;
    }
    cout << sum << endl;
   
    return 0;
}
