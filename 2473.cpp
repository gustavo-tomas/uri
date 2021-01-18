#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int result[6], flav[6], count=0;
    for(int i=0; i<6; i++) cin >> flav[i];
    for(int i=0; i<6; i++){
        cin >> result[i];
        for(int j=0; j<6; j++){
            if(result[i] == flav[j]) count++;
        }
    }


    if(count == 6) cout << "sena" << endl;
    else if(count == 5) cout << "quina" << endl;
    else if(count == 4) cout << "quadra" << endl;
    else if(count == 3) cout << "terno" << endl;
    else cout << "azar" << endl;

    return 0;
}
