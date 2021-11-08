#include <bits/stdc++.h>
using namespace std;

int bin_search(vector<int> v, int val){
    int l = 0, r = v.size()-1, mid=0, flag=0, res = -1;
    while(l <= r){
        mid = (r + l)/2;
        if(val < v[mid]) r = mid-1;
        else if(val > v[mid]) l = mid+1;
        else{
            res = mid;
            r = mid - 1;
        }
    }
    return res;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q, num, count=1;
    while(cin >> n >> q && (n || q)){
        cout << "CASE# " << count << ":" << endl;
        vector<int> v(n,0);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for(int i=0; i<q; i++){
            cin >> num;
            int idx = bin_search(v, num);
            
            if(idx < 0) cout << num << " not found" << endl;
            else cout << num << " found at " << idx+1 << endl;
        }
        count++;
    }

    return 0;
}
