#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, max, curr = 0;
    char ans = 'N';
    cin >> n >> max;
    while(n--){
        int out, in;
        cin >> out >> in;
        curr = curr - out + in;
        if(curr > max) ans = 'S';
    }
    cout << ans << endl;
    return 0;
}