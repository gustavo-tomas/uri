#include <bits/stdc++.h>
using namespace std;

int main(){
 
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    
    double m;
    while (cin >> m) {
        double seconds = 21'600.0 + (21'600.0 * m) / 90.0;

        int minutes = 0;
        while (seconds > 0) {
            seconds -= 60;
            minutes++;
        }
        if (seconds < 0) {
            seconds += 60;
            minutes -= 1;
        }

        int hours = 0;
        while (minutes > 0) {
            minutes -= 60;
            hours++;
        }
        if (minutes < 0) {
            minutes += 60;
            hours -= 1;
        }

        if (m>= 360 || m < 90) cout << "Bom Dia!!\n";
        else if (m >= 90 && m < 180) cout << "Boa Tarde!!\n";
        else if (m >= 180 && m < 270) cout << "Boa Noite!!\n";
        else if (m >= 270 && m < 360) cout << "De Madrugada!!\n";
        printf("%02d:%02d:%02d\n", hours % 24, minutes, (int) seconds);
    }

    return 0;
}
