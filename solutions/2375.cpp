#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int d, h, w, s;
    cin >> d >> h >> w >> s;

    if(min({h,w,s}) >= d)
        cout << "S" << endl;
    else
        cout << "N" << endl;
   
    return 0;
}
