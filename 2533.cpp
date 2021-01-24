#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    double grade, hour;
    while(cin >> n){
        double sum_up = 0, sum_down = 0;
        while(n--){
            cin >> grade >> hour;
            sum_up += (grade * hour);
            sum_down += hour;
        }
        sum_down *= 100;
        cout << fixed << setprecision(4) << sum_up / sum_down << endl;
    }

    return 0;
}
