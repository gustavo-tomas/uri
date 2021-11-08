#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, cuts, sum = 0;
    cin >> n;
    while(n--){
        cin >> cuts;
        sum += (cuts - 1);
    }
    cout << sum << endl;

    return 0;
}