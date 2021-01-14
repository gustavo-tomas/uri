#include <bits/stdc++.h>
using namespace std;

typedef struct struct_t{
    int prt;
    char type;
}struct_t;

bool compare_type(struct_t a, struct_t b){
    if(a.type == 'V' && b.type == 'D') return true;
    return false;
}

bool compare_prt(struct_t a, struct_t b){
    if(a.prt > b.prt) return true;
    return false;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int x1, y1, x2, y2, n, xm, ym, test=0;
    while(cin >> x1 >> y1 >> x2 >> y2 && (x1 || y1 || x2 || y2)){
        cin >> n;
        int count=0;
        while (n--){
            cin >> xm >> ym;
            if(xm >= x1 && xm <= x2 && ym <= y1 && ym >= y2)
                count++;
        }
        test++;
        cout << "Teste " << test << endl;
        cout << count << endl;
    } 

    return 0;
}
