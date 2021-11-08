#include <bits/stdc++.h>
using namespace std;

// [1,15] = 0; [16,30] = 1; [31,45] = 2; [46,60] = 3; [61,75] = 4; 
int card_hash(int x){
    if(x >= 1 && x <= 15) return 0;
    if(x >= 16 && x <= 30) return 1;
    if(x >= 31 && x <= 45) return 2;
    if(x >= 46 && x <= 60) return 3;
    if(x >= 61 && x <= 75) return 4;
    return -10097;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int card[24];
    while(cin >> card[0]){
        for(int i=1; i<24; i++) cin >> card[i];

        int aux[24];
        for(int i=0; i<24; i++){
            aux[i] = card_hash(card[i]);
        }

        // for(int i=0; i<24; i++){
        //     cout << aux[i] << " ";
        // }

        // 01234 repeats 3 times; 0134 once; 0123 once
        // 01234 positions 0,5,14;
        // 0134 position 10
        // 0123 position 20
        
        // 01234
        int count=0;
        if(aux[0] == aux[1]-1 && aux[1] == aux[2]-1 && aux[2] == aux[3]-1 && aux[3] == aux[4]-1){
            count++;
        }

        if(aux[5] == aux[6]-1 && aux[6] == aux[7]-1 && aux[7] == aux[8]-1 && aux[8] == aux[9]-1){
            count++;
        }

        if(aux[14] == aux[15]-1 && aux[15] == aux[16]-1 && aux[16] == aux[17]-1 && aux[17] == aux[18]-1){
            count++;
        }

        // 0134
        if(aux[10] == aux[11]-1 && aux[11] == aux[12]-2 && aux[12] == aux[13]-1){
            count++;
        }

        // 0123
        if(aux[20] == aux[21]-1 && aux[21] == aux[22]-1 && aux[22] == aux[23]-1){
            count++;
        }

        sort(aux, aux+24);

        int count_0=0, count_1=0, count_2=0, count_3=0, count_4=0;
        for(int i=0; i<24; i++){
            if(aux[i] == 0) count_0++;
            else if(aux[i] == 1) count_1++;
            else if(aux[i] == 2) count_2++;
            else if(aux[i] == 3) count_3++;
            else if(aux[i] == 4) count_4++;
        }
        
        // cout << "          " << count_0 << " " << count_1 << " " << count_2 << " " << count_3 << " " << count_4 << " " << endl;

        int rec = 0;
        if(count_0 == 5 && count_1 == 5 && count_2 == 4 && count_3 == 5 && count_4 == 5){
            rec = 1;
        }

        if(count == 5) cout << "OK" << endl;
        else if(rec) cout << "RECICLAVEL" << endl;
        else cout << "DESCARTAVEL" << endl;
    }
    
    return 0;
}
