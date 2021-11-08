#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){ 
    return (!a) ? b : gcd(b % a, a);
}

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int x, y, z;
    while(cin >> x >> y >> z){
        int hip = max({x,y,z});
        int c1 = min({x,y,z});
        int c2;

        if(hip == x && c1 == y) c2 = z;
        else if(hip == x && c1 == z) c2 = y;
        
        else if(hip == y && c1 == x) c2 = z;
        else if(hip == y && c1 == z) c2 = x;
        
        else if(hip == z && c1 == x) c2 = y;
        else if(hip == z && c1 == y) c2 = x;

        cout << "tripla";
        if(hip*hip == c1*c1 + c2*c2){
            cout << " pitagorica";
            if(gcd(x,y) == 1 && gcd(x,z) == 1 && gcd(y,z) == 1){
                cout << " primitiva";
            }
        }
        cout << endl;
    }

    return 0;
}
