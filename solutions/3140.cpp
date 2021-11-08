#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    string aux;
    while(getline(cin,aux)){
        if(aux.find("<body>") != string::npos){
            while(getline(cin,aux) && aux.find("</body>") == string::npos){
                cout << aux << endl;
            }
        }
    }
   
    return 0;
}
