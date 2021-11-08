#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, a, b, count_a, count_b;
    while(cin >> n && n){
        count_a = 0;
        count_b = 0;
        while(n--){
            cin >> a >> b;
            if(a > b) count_a++;
            if(a < b) count_b++;
        }
        cout << count_a << " " << count_b << endl;
    }   

    return 0;
}
