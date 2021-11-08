#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int cost, budget;
    cin >> budget >> cost;

    int days = budget/cost;
    cout << "A UFSC fecha dia ";
    if(days+20 < 30) cout << days+21 << " de setembro." << endl;
    else cout << days-9 << " de outubro." << endl;
    
    return 0;
}
