#include<bits/stdc++.h>
using namespace std;
#define DIST 60000000

int prime(int x){
    if(x == 1) return 0;
    if(x % 2 == 0) return (x == 2) ? 1 : 0;   
    for(int i=3; i<=sqrt(x); i++){
        if(x % i == 0) return 0;
    }
    return 1;
}

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, sum = 0;
    cin >> n;
    for(int i=0; i<10;){
        if(prime(n)){
            sum += n;
            i++;
        }
        n++;
    }
    cout << sum << " km/h" << endl;
    cout << DIST / sum << " h / " <<  DIST / sum / 24 << " d" << endl;
   
    return 0;
}
