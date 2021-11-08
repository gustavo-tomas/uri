#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m, s;
    while(cin >> n >> m >> s && n > 0){
        char arena[n][m], curr_dir;
        int curr_i, curr_j;
        string directions;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> arena[i][j];
                if( arena[i][j] == 'N' || arena[i][j] == 'S' ||
                    arena[i][j] == 'L' || arena[i][j] == 'O'){
                    curr_i = i;
                    curr_j = j;
                    curr_dir = arena[i][j];
                    arena[i][j] = '.';
                }
            }
        }
        cin >> directions;

        int turn, points = 0;
        for(auto i : directions){
            if(i == 'D') turn = 1;
            else if(i == 'E') turn = -1;
            else turn = 0;
        
            int last_i = curr_i, last_j = curr_j;
            if(turn == 1){
                if(curr_dir == 'N') curr_dir = 'L';
                else if(curr_dir == 'L') curr_dir = 'S';
                else if(curr_dir == 'S') curr_dir = 'O';
                else if(curr_dir == 'O') curr_dir = 'N';
            }
            else if(turn == -1){
                if(curr_dir == 'N') curr_dir = 'O';
                else if(curr_dir == 'O') curr_dir = 'S';
                else if(curr_dir == 'S') curr_dir = 'L';
                else if(curr_dir == 'L') curr_dir = 'N';
            }
            else{
                if(curr_dir == 'N')
                    curr_i = max(curr_i-1,0);
                else if(curr_dir == 'L')
                    curr_j = min(curr_j+1,m-1);
                else if(curr_dir == 'S')
                    curr_i = min(curr_i+1,n-1);
                else if(curr_dir == 'O')
                    curr_j = max(curr_j-1,0);
                if(arena[curr_i][curr_j] == '#'){
                    curr_i = last_i;
                    curr_j = last_j;
                }
                else if(arena[curr_i][curr_j] == '*'){
                    arena[curr_i][curr_j] = '.';
                    points++;
                }
            }
        }
        cout << points << endl;
    }
    return 0;
}