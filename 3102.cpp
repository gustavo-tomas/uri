#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x1, y1, x2, y2, x3, y3;
    cin >> n;
    while(n--){
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        double l1 = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
        double l2 = sqrt(pow(x1-x3,2) + pow(y1-y3,2));
        double l3 = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
        double p = (l1+l2+l3)/2.0;
        double area = sqrt(p*(p-l1)*(p-l2)*(p-l3));
        cout << fixed << setprecision(3) << area << endl;
    }

    return 0;
}
