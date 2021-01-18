#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, mat;
    string course;
    while(cin >> n){
        int c_ep=0, c_eh=0, intruder=0;
        while(n--){
            cin >> mat >> course;
            if(course == "EPR") c_ep++;
            else if(course == "EHD") c_eh++;
            else intruder++;
        }
        cout << "EPR: " << c_ep << endl;
        cout << "EHD: " << c_eh << endl;
        cout << "INTRUSOS: " << intruder << endl;
    }

    return 0;
}
