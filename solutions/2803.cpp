#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    getline(cin,s);

    if(s == "roraima") cout << "Regiao Norte" << endl;
    else if(s == "acre") cout << "Regiao Norte" << endl;
    else if(s == "amapa") cout << "Regiao Norte" << endl;
    else if(s == "amazonas") cout << "Regiao Norte" << endl;
    else if(s == "para") cout << "Regiao Norte" << endl;
    else if(s == "rondonia") cout << "Regiao Norte" << endl;
    else if(s == "tocantins") cout << "Regiao Norte" << endl;
    else { cout << "Outra regiao" << endl; }

    return 0;
}
