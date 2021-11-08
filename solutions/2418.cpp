#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double grades[5];
    for(int i=0; i<5; i++) cin >> grades[i];
    sort(grades, grades+5);
    double avg = grades[1] + grades[2] + grades[3];
    cout << fixed << setprecision(1) << avg << endl;
    
    return 0;
}
