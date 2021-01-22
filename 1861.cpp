#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    string assassin, victim;
    map<string,int> hall;
    set<string> dead;

    while(cin >> assassin >> victim){
        
        if(hall.count(assassin)){
            hall[assassin]++;
        } else {
            hall[assassin] = 1;
        }
        dead.insert(victim);
    }

    cout << "HALL OF MURDERERS" << endl;
    for(auto& p : hall){
        if(!dead.count(p.first)){
	        cout << p.first << " " << p.second << endl;
        }
    }

    return 0;
}
