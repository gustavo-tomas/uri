#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int am, rm, em, av, rv, ev, true_time_m, true_time_v;
    cin >> am >> rm >> em;
    cin >> av >> rv >> ev;
    
    string s;
    getline(cin,s);
    getline(cin,s);
    
    true_time_m = (em * s.size()) + rm + 2*am;
    true_time_v = (ev * s.size()) + rv + 2*av;

    if(true_time_m < true_time_v) cout << "Matheus" << endl;
    else if(true_time_m > true_time_v) cout << "Vinicius" << endl;
    else cout << "Empate" << endl;

    return 0;
}
