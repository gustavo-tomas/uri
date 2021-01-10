#include <bits/stdc++.h>
using namespace std;

typedef struct type_t{
    string name = "";
    double price = 0;
    int amount = 0;
}type_t;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, n, p;
    cin >> t;
    while (t--){
        double total = 0;
        list<type_t> item;

        cin >> n;
        while (n--){
            type_t p1;
            cin >> p1.name >> p1.price;
            item.push_front(p1);
        }
        cin >> p;
        while (p--){
            int amnt;
            string aux;
            cin >> aux >> amnt;

            for(auto i : item){
                if(i.name == aux){
                    total += amnt * i.price;
                }
            }
        }
        cout << "R$ " << fixed << setprecision(2) << total << endl;
    }

    return 0;
}
