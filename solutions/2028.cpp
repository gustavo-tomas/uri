#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, count=1;
    while(cin >> n){
        int num = 1, temp = n;
        while(temp > 0){
            num += temp;
            temp--;
        }
        
        if(count > 1) cout << endl;

        cout << "Caso " << count << ": " << num << " ";
        
        if(num == 1) cout << "numero" << endl;
        else cout << "numeros" << endl;
        
        for(int i=0; i<=n; i++){
            if(i == 0) cout << i;
            for(int j=0; j<i; j++){
                cout << " " << i;
            }
        }
        cout << endl;
        count++;
    }
    cout << endl;

    return 0;
}
