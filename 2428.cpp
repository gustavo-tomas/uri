#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> sides;
    for(int i=0; i<4; i++){
        int side;
        cin >> side;
        sides.push_back(side);
    }
    sort(sides.begin(),sides.end());
    if(sides[0] * sides[3] == sides[1] * sides[2]) cout << 'S' << endl;
    else cout << 'N' << endl;
    return 0;
}