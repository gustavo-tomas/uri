#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    while(cin >> n && n){
        string name, speediest;
        int year, time, best_time=1000005;
        while(n--){
            cin >> name >> year >> time;
            if(year - time < best_time){
                best_time = year - time;
                speediest = name;
            }
        }
        cout << speediest << endl;
    }
    
   
    return 0;
}
