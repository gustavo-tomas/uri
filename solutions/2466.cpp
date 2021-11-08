#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, ball[100004], next[100004];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> ball[i];
    }

    while(n > 0){
        int j = 0;
        for(int i=0; i<n-1; i++){
            if(ball[i] != ball[i+1]){
                next[j++] = 1;
            } else {
                next[j++] = -1;
            }
        }
        for(int i=0; i<n-1; i++){
            ball[i] = next[i];
        }
        n--;
    }
    if(ball[0] == 1) cout << "branca" << endl;
    else if(ball[0] == -1) cout << "preta" << endl;
   
    return 0;
}
