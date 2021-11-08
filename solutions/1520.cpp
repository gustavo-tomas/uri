#include <bits/stdc++.h>
using namespace std;
#define ULL unsigned long long int
#define LL long long int

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    while(cin >> n){
        int x, y, num;
        vector<int> boxes;

        while(n--){
            cin >> x >> y;
            for(int i=x; i<=y; i++) boxes.push_back(i);
        }
    
        sort(boxes.begin(), boxes.end());

        cin >> num;

        int index_begin=-1, index_end=-1;
        for(int i=0; i<boxes.size(); i++){
            if(boxes[i] == num){
                if(index_begin < 0) index_begin = i;
                index_end = i;
            }
        }
           
        if(index_begin < 0) cout << num << " not found" << endl;
        else cout << num << " found from " << index_begin << " to " << index_end << endl;
    }

    return 0;
}
