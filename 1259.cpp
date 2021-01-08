#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int i=0, j=0, num, n, even[100005], odd[100005];
    cin >> n;
    while(n--){
        cin >> num;
        if(num % 2) odd[j++] = num;
        else even[i++] = num;
    }
    sort(even, even+i);
    sort(odd, odd+j);
    for(int k=0; k<i; k++) cout << even[k] << endl;
    while(j--) cout << odd[j] << endl;
 
    return 0;
}
