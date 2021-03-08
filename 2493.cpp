#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    while(cin >> t){
        int body_count = 0, x[100], y[100], z[100], true_ans[100];
        string damned[100];
        char space;
        
        for(int i=1; i<=t; i++){
            cin >> x[i] >> y[i] >> space >> z[i];
            if(x[i] + y[i] == z[i] || x[i] - y[i] == z[i] || x[i] * y[i] == z[i])
                true_ans[i] = 1;
            else
                true_ans[i] = 0;
        }
        
        for(int i=1; i<=t; i++){
            int index, res;
            string name;
            char move;
            cin >> name >> index >> move;
            
            
            if(move == '+'){
                res = x[index] + y[index];
            } else if(move == '-'){
                res = x[index] - y[index];
            } else if(move == '*') {
                res = x[index] * y[index];
            } else {
                if(true_ans[index]) res = z[index] + 1;
                else res = z[index];
            } 
            
            if(res != z[index]) damned[body_count++] = name;
        }
        
        if(body_count == t) cout << "None Shall Pass!" << endl;
        else if(body_count == 0) cout << "You Shall All Pass!" << endl;
        else {
            sort(damned, damned+body_count);
            for(int i=0; i<body_count; i++){
                if(i == 0)
                    cout << damned[i];
                else cout << " " << damned[i];
            }
            cout << endl; 
        }

    }
    return 0;
}
