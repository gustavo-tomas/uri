#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int val, test = 1;
    while(cin >> val && val){
        cout << "Teste " << test << endl;
        int c50, c10, c5, c1, rem;
        
        c50 = val / 50;
        val = val % 50;

        c10 = val / 10;
        val = val % 10;

        c5 = val / 5;
        val = val % 5;

        c1 = val / 1;
        val = val % 1;

        cout << c50 << " " << c10 << " " << c5 << " " << c1 << endl;
        cout << endl;
        test++;
    }
   
    return 0;
}
