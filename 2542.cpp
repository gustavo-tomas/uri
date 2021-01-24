#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long int chose_atr, chose_m, chose_l, num_atr, num_car_m, num_car_l, card[1003][1003];
    while(cin >> num_atr){
        
        cin >> num_car_m >> num_car_l;
        for(long int i = 1; i <= num_car_m + num_car_l; i++){
            for(long int j = 1; j <= num_atr; j++){
                cin >> card[i][j];
            }
        }
        cin >> chose_m >> chose_l >> chose_atr;
        if(card[chose_m][chose_atr] > card[num_car_m + chose_l][chose_atr])
            cout << "Marcos" << endl;
        else if(card[chose_m][chose_atr] < card[num_car_m + chose_l][chose_atr])
            cout << "Leonardo" << endl;
        else 
            cout << "Empate" << endl;
    }

    return 0;
}
