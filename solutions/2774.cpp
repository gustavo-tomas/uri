#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int h, m;
    while (cin >> h >> m) {
        int n = h * 60 / m;
        double x[n], sum = 0, avg;
        for (int i = 0; i < n; i++) {
            cin >> x[i];
            sum += x[i];
        }
        avg = sum / n;
        double prec = 0;
        for (int i = 0; i < n; i++)
            prec += (x[i] - avg) * (x[i] - avg);
        
        prec = sqrt(prec / (n - 1));
        printf("%.5lf\n", prec);
    }

    return 0;
}
