#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    double o, b, i;
    cin >> o >> b >> i;
    if(min({o,b,i}) == o && min({o,b,i}) == b) cout << "Empate" << endl;
    else if(min({o,b,i}) == o && min({o,b,i}) == i) cout << "Empate" << endl;
    else if(min({o,b,i}) == b && min({o,b,i}) == i) cout << "Empate" << endl;
    else if(min({o,b,i}) == o) cout << "Otavio" << endl;
    else if(min({o,b,i}) == b) cout << "Bruno" << endl;
    else cout << "Ian" << endl;
   
    return 0;
}
