#include <bits/stdc++.h>
using namespace std;

int main(){

    int x1, y1, x2, y2;
    while(cin >> x1 >> y1 >> x2 >> y2 && x1 > 0){
        int steps = 0;
        bool diag = (pow(x1-x2,2) == pow(y1-y2,2));
        while(!diag && (x1 != x2 || y1 != y2)){
            if(x1 > x2){
                x1 -= (x1-x2);
                steps++;
            } else if(x1 < x2){
                x1 += (x2-x1);
                steps++;
            }
            if(y1 > y2){
                y1 -= (y1-y2);
                steps++;
            } else if(y1 < y2){
                y1 += (y2-y1);
                steps++;
            }
            diag = (pow(x1-x2,2) == pow(y1-y2,2));
        }
        if(diag && sqrt(pow(x1-x2,2) + pow(y1-y2,2)) > 0)
            steps += 1;
        cout << steps << endl;
    }
    return 0;
}