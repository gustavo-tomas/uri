#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    // milhares, centenas, dezenas, unidades
    string m[] = {"","M"}; 
    string c[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string x[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string u[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};

    string thousand = m[n/1000];
    string hundred = c[(n%1000)/100];
    string ten = x[(n%100)/10];
    string one = u[n%10];

    string res = thousand + hundred + ten + one;
    cout << res << endl;
    
    return 0;
}
