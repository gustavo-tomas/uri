#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, aux;
    while(cin >> n >> m && (n || m)){
        map<int,int> rec;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> aux;
                if(rec.count(aux)) rec[aux]++;
                else rec[aux] = 1;
            }
        }
        int idx_rep, most_rep = 0, sec_rep = 0, idx_sec;
        for(auto& i : rec){
            if(i.second > most_rep){
                sec_rep = most_rep;
                idx_sec = idx_rep;
                
                most_rep = i.second;
                idx_rep = i.first;
            }
            if(i.second > sec_rep && i.second < most_rep){
                sec_rep = i.second;
                idx_sec = i.first;
            }
        }

        for(auto& i : rec){
            if(i.second == sec_rep){
                cout << i.first << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
