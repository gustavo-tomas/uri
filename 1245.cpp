#include <bits/stdc++.h>
using namespace std;

typedef struct struct_t{
    int size, dir=0, esq=0;
}struct_t;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    while(cin >> n){
        vector<struct_t> v;
        int sum=0;
        while(n--){
            struct_t shoe;
            char foot;
            cin >> shoe.size >> foot;
            
            if(foot == 'D') shoe.dir = 1;
            else shoe.esq = 1;

            int found=0;
            for(int i=0; i<v.size(); i++){
                if(v[i].size == shoe.size){
                    v[i].esq += shoe.esq;
                    v[i].dir += shoe.dir;
                    found = 1;
                }
            }
            
            if(!found){
                v.push_back(shoe);
            }
        }
        for(auto i : v){
            if(i.dir && i.esq){
                sum += min(i.dir,i.esq);
            }
        }
        cout << sum << endl;
    }

    return 0;
}
