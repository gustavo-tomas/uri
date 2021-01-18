#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int border=0, sum=0, sum2=0, n, num[100005];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> num[i];
        sum += num[i];
    }

    for(int i=0; i<n; i++){
        if(sum == sum2){
            border = i;
            break;
        }
        else{
            sum -= num[i];
            sum2 += num[i];
        }
    }
    cout << border << endl;

    return 0;
}
