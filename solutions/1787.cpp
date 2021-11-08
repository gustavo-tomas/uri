#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    while(cin >> n && n){
        int u, r, i, count_u=0, count_r=0, count_i=0, max_all;
        while(n--){
            cin >> u >> r >> i;
            double s1 = log2(u), s2 = log2(r), s3 = log2(i);
            bool f1 = false, f2 = false, f3 = false;

            if(s1 == (int)s1){
                count_u++;
                f1 = true;
            }
            if(s2 == (int)s2){
                count_r++;
                f2 = true;
            }
            if(s3 == (int)s3){
                count_i++;
                f3 = true;
            }
        
            max_all = max({u,r,i});
            if(u == max_all && f1) count_u++;
            else if(r == max_all && f2) count_r++;
            else if(i == max_all && f3) count_i++;
        }

        max_all = max({count_u, count_r, count_i});
        if(max_all == count_u && (count_u == count_i || count_u == count_r)){
            cout << "URI" << endl;            
        }
        else if(max_all == count_r && (count_r == count_u || count_r == count_i)){
            cout << "URI" << endl;        
        }
        else if(max_all == count_i && (count_i == count_u || count_i == count_r)){
            cout << "URI" << endl;
        }
        else if(max_all == count_u) cout << "Uilton" << endl;
        else if(max_all == count_r) cout << "Rita" << endl;
        else cout << "Ingred" << endl;
    }

    return 0;
}
