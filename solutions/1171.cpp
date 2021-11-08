#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, num[100005], count[100005];
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> num[i];
        count[i] = 1;
    }

    sort(num, num+n);

    for(int i=0, j=0; i<n; i++, j++){
        while(num[i] == num[i+1] && i+1 < n){
            count[j]++;
            i++;
        }
    }

    for(int i=0, j=0; i<n; i++, j++){
        while(num[i] == num[i+1] && i+1 < n){
            i++;
        }
        cout << num[i] << " aparece " << count[j] << " vez(es)" << endl;
    }

    return 0;
}
