#include <bits/stdc++.h>
using namespace std;

int bin_search(vector<int> v, int val){
    
    int l = 0, r = v.size()-1, mid=0, flag=0;

    while((l <= r) && !flag){
        mid = (r + l)/2;
        if(val < v[mid]) r = mid-1;
        else if(val > v[mid]) l = mid+1;
        else flag = 1;
    }

    return mid;
}

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, package, aux, position=0;
    vector<int> house;
    cin >> n >> m;
    
    for(int i=0; i<n; i++){
        cin >> aux;
        house.push_back(aux);
    }

    unsigned int sum=0;
    for(int i=0; i<m; i++){
        cin >> package;
        
        int index = bin_search(house, package);
        sum += abs(position-index);
        position = index;
    }
    cout << sum << endl;

    return 0;
}
