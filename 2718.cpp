#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int

string to_binary(ull n){
    string r;
    while(n != 0) { r = (n%2 == 0 ? "0" : "1")+r; n/=2; }
    return r;
}

int main(){

    ull n, num;
    cin >> n;
    while(n--){
        cin >> num;
        string bin = to_binary(num);
        
        ull max_count = 0;
        for(ull i=0; i<bin.size(); i++){
            ull j = i, count = 0;
            while(j < bin.size() && bin[j] == '1'){
                count++;
                j++;
            }
            max_count = max(count, max_count);
        }
        cout << max_count << endl;
    }

    return 0;
}