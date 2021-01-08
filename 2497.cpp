#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n, count=0;
    while(cin >> n && n != -1){
        count++;
        cout << "Experiment " << count << ": ";
        cout << n/2 << " full cycle(s)" << endl;
    }
    return 0;
}
