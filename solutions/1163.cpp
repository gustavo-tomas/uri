#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    double h, p1, p2, a, v, g = -9.80665, pi = 3.14159;
    while(cin >> h){
        cin >> p1 >> p2 >> n;
        while(n--){
            cin >> a >> v;
            a = (pi*a)/180.0;
            double t1 = (-v*sin(a)+sqrt(pow(v*sin(a),2)-2*g*h))/g;
            double t2 = (-v*sin(a)-sqrt(pow(v*sin(a),2)-2*g*h))/g;
            double t = t1 >= 0 ? t1 : t2;
            double x = v*cos(a)*t;
            
            cout << fixed << setprecision(5) << x << " -> ";
            if(x >= p1 && x <= p2) cout << "DUCK" << endl;
            else cout << "NUCK" << endl;
        }
    }
    return 0;
}