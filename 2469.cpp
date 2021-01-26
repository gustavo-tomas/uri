#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, aux;
    map<int,int> m;
    cin >> n;
    while(n--){
        cin >> aux;
        if(m.count(aux)) m[aux]++;
        else m[aux] = 1;
    }

    int largest = 0, mode = 0;
    for(auto& i : m){
        if(i.second > mode){
            mode = i.second;
            largest = i.first;
        }
        if(i.second == mode && i.first > largest){
            largest = i.first;
        }
    }

    cout << largest << endl;

    return 0;
}
