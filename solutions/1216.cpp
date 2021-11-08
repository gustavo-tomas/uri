#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int d, sum=0, count=0;
    string name;

    while (getline(cin, name)){
        cin >> d;
        sum += d;
        count++;
        getline(cin, name);
    }

    cout << fixed << setprecision(1) << (double) sum/count << endl;
    return 0;
}
