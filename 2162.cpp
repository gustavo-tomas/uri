#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, height[100005], aux[100005], yep = 1;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> height[i];
    }

    for(int i=0; i<n-1 && yep; i++){
        if(height[i] > height[i+1]){
            aux[i] = 1;
            aux[i+1] = 0;
        }
        else if(height[i] < height[i+1]){
            aux[i] = 0;
            aux[i+1] = 1;
        }
        else{
            yep = 0;
        }
        for(int j=0; j<=i; j++){
            if(aux[j] == aux[j+1]) yep = 0;
        }
    }
    cout << yep << endl;

    return 0;
}
