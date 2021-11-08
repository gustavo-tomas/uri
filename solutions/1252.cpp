#include <bits/stdc++.h>
using namespace std;
#define ll long long

int m = 0;

bool even(ll a, ll b){
    return (a < b);
}

bool odd(ll a, ll b){
    return (a > b);
}

bool even_odd(ll a, ll b){
    return (a % 2 != 0);
}

bool comparator(ll a, ll b){
    int mod_a = a % m, mod_b = b % m;
    if(mod_a < mod_b) return true;
    if(mod_a == mod_b){
        if(a % 2 == 0 && b % 2 == 0) return even(a,b);
        if(a % 2 != 0 && b % 2 != 0) return odd(a,b);
        if(a % 2 == 0 && b % 2 != 0) return even_odd(a,b);
        if(a % 2 != 0 && b % 2 == 0) return even_odd(a,b);
    }
    return false;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    while(cin >> n >> m && (n || m)){
        ll array[10004];
        for(int i=0; i<n; i++) cin >> array[i];

        sort(array, array+n, comparator);

        cout << n << " " << m << endl;
        for(int i=0; i<n; i++) cout << array[i] << endl;
    }
    cout << "0 0" << endl;
    return 0;
}
