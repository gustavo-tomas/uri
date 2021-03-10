#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int sum = 0, elem;
    for(int i=1; i<=6; i++){
        cin >> elem;
        if(i <= 3 || i == 6) sum += elem;
        else sum -= elem;
    }
    
    if(sum >= 0) cout << "Middle-earth is safe." << endl;
    else cout << "Sauron has returned." << endl;

    return 0;
}
