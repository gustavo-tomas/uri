#include <bits/stdc++.h>
using namespace std;

int mat[110][110], n, flag[110][110];

void pass(int posI, int posJ){
    flag[posI][posJ] = 1;
    if(posJ+1 < n && !flag[posI][posJ+1] && mat[posI][posJ+1] >= mat[posI][posJ])
        pass(posI, posJ+1);
    
    if(posI+1 < n && !flag[posI+1][posJ] && mat[posI+1][posJ] >= mat[posI][posJ])
        pass(posI+1, posJ);
    
    if(posJ-1 >= 0 && !flag[posI][posJ-1] && mat[posI][posJ-1] >= mat[posI][posJ])
        pass(posI, posJ-1);
    
    if(posI-1 >= 0 && !flag[posI-1][posJ] && mat[posI-1][posJ] >= mat[posI][posJ])
        pass(posI-1, posJ);
}

int main(){

    int posI, posJ, sum = 0;
    cin >> n >> posI >> posJ;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> mat[i][j];
            flag[i][j] = 0;
        }
    }
    pass(posI-1, posJ-1);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(flag[i][j]) sum++;
        }
    }
    cout << sum << endl;

    return 0;
}
