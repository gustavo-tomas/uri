#include <bits/stdc++.h>
using namespace std;
#define LL long long int

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    LL size, n;
    cin >> size >> n;
    LL res = (size-(n-1)) * (size-(n-1)) + (n-1);

    cout << res << endl;

    return 0;
}
