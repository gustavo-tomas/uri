#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int c, n;
    char mat[123][123];
    cin >> n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> mat[i][j];
        }
    }

    int right = 1, points = 0, most_points = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(right) {
                if(mat[i][j] == 'o') points++;
                else if(mat[i][j] == 'A') points = 0;
            } else {
                if(mat[i][n-j-1] == 'o') points++;
                else if(mat[i][n-j-1] == 'A') points = 0;
            }
            most_points = max(points,most_points);
        }
        right = !right;
    }
    cout << most_points << endl;
   
    return 0;
}
