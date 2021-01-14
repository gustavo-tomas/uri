#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int students, computers, caio, compiler;
    cin >> students >> computers >> caio >> compiler;
    
    if(computers-caio-compiler > students) 
        cout << "Igor feliz!" << endl;
    else if(caio > compiler/2)
        cout << "Caio, a culpa eh sua!" << endl;
    else
        cout << "Igor bolado!" << endl;

    return 0;
}
