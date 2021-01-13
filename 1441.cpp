#include <bits/stdc++.h>
using namespace std;

int largest;

int granizo(int num){
    if(num > largest) largest = num;
    
    if(num <= 1) return 1;
    if(num % 2 != 0) num = 3*num+1;
    else num /= 2;

    return granizo(num);
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int num;
    while (cin >> num && num){
        largest = num;
        granizo(num);
        cout << largest << endl;
    }

    return 0;
}
