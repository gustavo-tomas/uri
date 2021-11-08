#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    string presence, student[10003];
    int t, n;

    cin >> t;
    while(t--){
        cin >> n;
        
        for(int i=0; i<n; i++){
            cin >> student[i];
        }
        
        int flag = 0;
        for(int i=0; i<n; i++){
            cin >> presence;

            int total = 0, count = 0;
            for(int j=0; j<presence.size(); j++){
                if(presence[j] == 'P'){
                    count++;
                    total++;
                }
                else if(presence[j] == 'A'){
                    total++;
                }
            }

            if((double) count / total < 0.75f){
                    
                if(flag != 0) cout << " ";
                cout << student[i];
                flag = 1;
            }
        }
        cout << endl;
    }
 
    return 0;
}
