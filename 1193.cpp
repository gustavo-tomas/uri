#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
 
int main() {
 
    int n, dec;
    string num, base;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> num >> base;
        cout << "Case " << i << ":" << endl;
        
        // decimal hexadecimal binary
        if     (base == "bin") dec = stoi(num, nullptr, 2);
        else if(base == "dec") dec = stoi(num, nullptr, 10);
        else if(base == "hex") dec = stoi(num, nullptr, 16);
        int aux = dec;
        string str;
        
        if(base == "bin"){
            printf("%d dec\n%x hex\n", dec, dec);
        }
        else if(base == "dec"){
            printf("%x hex\n", dec);
            while(aux!=0) {str = (aux % 2 == 0 ? "0" : "1") + str; aux/=2;}
            cout << str << " bin" << endl;
        }
        else if(base == "hex"){
            cout << dec << " dec" << endl;
            while(aux!=0) {str = (aux % 2 == 0 ? "0" : "1") + str; aux/=2;}
            cout << str << " bin" << endl;
        }
        cout << endl;
    }
 
    return 0;
}
