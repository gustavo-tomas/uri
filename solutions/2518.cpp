#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n, h, w, l;
    while(cin >> n >> h >> w >> l){
        double diagonal = sqrt(h*h+w*w);
        double area = l * diagonal * n;
        cout << fixed << setprecision(4) << area/10000.0 << endl;
    }
    return 0;
}
