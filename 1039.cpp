#include <bits/stdc++.h>
using namespace std;

int main(){

    double r1, x1, y1, r2, x2, y2;
    while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){
        double dist = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
        dist = dist + r2;
        if(dist > r1) cout << "MORTO" << endl;
        else cout << "RICO" << endl;
    }

    return 0;
}