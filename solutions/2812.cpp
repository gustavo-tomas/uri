#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, t;
    
    cin >> t;
    while(t--){
        int num[1234], size=0;
        cin >> n;
        
        for(int i=0; i<n; i++){
            int aux;
            cin >> aux;
            if(aux % 2){
                num[size++] = aux;
            }
        }

        sort(num, num+size);

        if(size % 2 == 0){
            for(int i=0; i<size && i < size-i-1; i++){
                cout << num[size-i-1] << " ";
                cout << num[i];
                if(i < size-i-2) cout << " ";
            }
        }

        else {
            for(int i=0; i<size && i <= size-i-1; i++){
                cout << num[size-i-1];
                if(i < size-i-1) cout << " ";
                if(size > 1 && i < size-i-1) cout << num[i];
                if(i < size-i-1) cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
