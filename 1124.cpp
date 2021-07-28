#include <bits/stdc++.h>
using namespace std;

int main(){

    double l, c, r1, r2;
    while(cin >> l >> c >> r1 >> r2 && l){
        double dist = sqrt(pow(r1-(l-r2),2)+pow(r1-(c-r2),2));
        if(dist >= r1+r2 && l >= 2*max(r1,r2) && c >= 2*max(r1,r2))
            cout << 'S' << endl;
        else 
            cout << 'N' << endl;
    }
    return 0;
}