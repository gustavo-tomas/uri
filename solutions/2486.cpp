#include <bits/stdc++.h>
using namespace std;

int main(){
 
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int n, t, multiplier;
    char food[355];

    while(cin >> t && t > 0){
        long int sum = 0;
        
        while (t--){
            cin >> n;
            scanf(" %[^\n]s", food);

            if(strcmp(food,"suco de laranja") == 0) multiplier = 120;
            else if(strcmp(food,"morango fresco") == 0) multiplier = 85;
            else if(strcmp(food,"mamao") == 0) multiplier = 85;
            else if(strcmp(food,"goiaba vermelha") == 0) multiplier = 70;
            else if(strcmp(food,"manga") == 0) multiplier = 56;
            else if(strcmp(food,"laranja") == 0) multiplier = 50;
            else if(strcmp(food,"brocolis") == 0) multiplier = 34;
            sum += (multiplier * n);
        }
        if(sum < 110) cout << "Mais " << 110-sum << " mg" << endl;
        else if(sum > 130) cout << "Menos " << sum - 130 << " mg" << endl;
        else cout << sum << " mg" << endl;
    }

    return 0;
}
