#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    while(cin >> n && n){
        string veredict;
        char curr_letter;
        int time, total_time=0, correct=0;
        int mem[1234], letter_time[1234];
        
        for(int i=65; i<=90; i++){
            mem[i] = 0;
            letter_time[i] = 0;
        }
        
        while(n--){
            cin >> curr_letter >> time >> veredict; 
            
            if(!mem[curr_letter]){
                mem[curr_letter] = 1;
            }

            if(veredict == "correct"){
                total_time += letter_time[curr_letter] + time;
                correct++;
            } else {
                letter_time[curr_letter] += 20;     
            }
        }
        cout << correct << " " << total_time << endl;
    }
    
    return 0;
}
