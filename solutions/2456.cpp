#include <bits/stdc++.h>
using namespace std;

bool ascending(int* array){
    for(int i=0; i<4; i++){
        if(array[i] > array[i+1]) return false;
    }
    return true;
}

bool descending(int* array){
    for(int i=0; i<4; i++){
        if(array[i] < array[i+1]) return false;
    }
    return true;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int array[5];
    for (int i = 0; i < 5; i++) cin >> array[i];
    
    if(ascending(array)) cout << "C" << endl;
    else if(descending(array)) cout << "D" << endl;
    else cout << "N" << endl;
    
    return 0;
}
