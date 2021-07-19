#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    while(cin >> n && n > 0){
        int val, sum = 0, count = 0;
        while(n--){
            cin >> val;
            sum += val;
            if(sum % 100 == 0) count++;
        }
        cout << count << endl;
    }

    return 0;
}