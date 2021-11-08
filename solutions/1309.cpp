#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    string doll, cent;
    while(cin >> doll >> cent){
        long int cont, rem = doll.size() % 3, c_flag=0, mark=0;
        
        if(rem == 0) cont = 3;
        else cont = rem;
        
        cout << "$";
        for(long int i=0; i<doll.size(); i++){
            cout << doll[i];
            if(cont == i+1 && !c_flag){
                if(doll.size() > 3)cout << ",";
                c_flag = 1;
            }
            if(mark == 3 && c_flag && i < doll.size()-1) cout << ",";
            if(c_flag){
                mark++;
                if(mark >= 4) mark = 1;
            }
        }
        cout << "." << setw(2) << setfill('0') << cent << endl;
    }
 
    return 0;
}
