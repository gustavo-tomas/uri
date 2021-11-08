#include <bits/stdc++.h>
using namespace std;
#define ULL unsigned long long int

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, dmg_a, time_a, dmg_b, time_b, h;
    cin >> t;
    while(t--){
        cin >> dmg_a >> time_a >> dmg_b >> time_b >> h;
        int time_counter=0;
        string last_hit;

        while(h > 0){
            if(time_counter % time_a == 0){
                h -= dmg_a;
                last_hit = "Andre";
            }
            if(h > 0 && time_counter % time_b == 0){
                h -= dmg_b;
                last_hit = "Beto";
            }
            time_counter++;
        }
        cout << last_hit << endl;
    }
    
    return 0;
}
