#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string dna, res;
    while(cin >> dna >> res){
        auto find = dna.find(res);
        if(find < dna.size()) cout << "Resistente" << endl;
        else cout << "Nao resistente" << endl;
    }
    
    return 0;
}
