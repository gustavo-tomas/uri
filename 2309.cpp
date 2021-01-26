#include<bits/stdc++.h>
using namespace std;

int weight(int key){
    if(key == 4) return 1;
    if(key == 5) return 2;
    if(key == 6) return 3;
    if(key == 7) return 4;
    if(key == 12) return 5;
    if(key == 11) return 6;
    if(key == 13) return 7;
    if(key == 1) return 8;
    if(key == 2) return 9;
    return 10;
}

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, a[3], b[3], aux, matcha = 0, matchb = 0;
    cin >> n;
    while(n--){
        for(int i=0; i<3; i++){
            cin >> aux;
            a[i] = weight(aux);
        }
        for(int i=0; i<3; i++){
            cin >> aux;
            b[i] = weight(aux);
        }

        int pa = 0, pb = 0;
        for(int i=0; i<3; i++){
            if(a[i] >= b[i]) pa++;
            else pb++;
        }
        if(pa > pb) matcha++;
        else matchb++;
    }
    cout << matcha << " " << matchb << endl;

    return 0;
}
