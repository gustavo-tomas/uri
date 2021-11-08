#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        unsigned int sum = 0;
        for(int i=0; i<a.size(); i++){
            if(a[i] <= b[i]) sum += b[i]-a[i];
            else{
                sum += 26 - abs(b[i]-a[i]);
            }
        }
        cout << sum << endl;
    }
   
    return 0;
}
