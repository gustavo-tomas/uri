#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, goals[213][213];
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> goals[i][j];
        }
    }

    int count=0;
    for(int i=0; i<n; i++){
        int GOOOOOL=0;
        for(int j=0; j<m; j++){
            if(goals[i][j] > 0) GOOOOOL++;
            if(GOOOOOL == m) count++;
        }
    }
    cout << count << endl;
    return 0;
}
