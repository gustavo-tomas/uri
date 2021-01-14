#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    while(n--){
        char op, equal;
        int a, b, res, r=0;
        cin >> a >> op >> b >> equal >> res;
        switch (op){
            case '+':
                r = abs(res-(a+b));
                break;
            case '-':
                r = abs(res-(a-b));
                break;
            case 'x':
                r = abs(res-(a*b));
                break;
            default:
                break;
        }
        cout << "E";
        while(r--) cout << "r";
        cout << "ou!" << endl;
    }

    return 0;
}
