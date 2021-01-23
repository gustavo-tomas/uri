#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        string raj, she;
        cin >> she >> raj;
        cout << "Caso #" << i << ": ";
        if(raj == she) cout << "De novo!";
        
        else if(raj == "papel" && she == "tesoura") cout << "Bazinga!";
        else if(raj == "papel" && she == "pedra") cout << "Raj trapaceou!";
        else if(raj == "papel" && she == "lagarto") cout << "Bazinga!";
        else if(raj == "papel" && she == "Spock") cout << "Raj trapaceou!";
    
        else if(raj == "tesoura" && she == "papel") cout << "Raj trapaceou!";
        else if(raj == "tesoura" && she == "pedra") cout << "Bazinga!";
        else if(raj == "tesoura" && she == "lagarto") cout << "Raj trapaceou!";
        else if(raj == "tesoura" && she == "Spock") cout << "Bazinga!";

        else if(raj == "pedra" && she == "papel") cout << "Bazinga!";
        else if(raj == "pedra" && she == "tesoura") cout << "Raj trapaceou!";
        else if(raj == "pedra" && she == "lagarto") cout << "Raj trapaceou!";
        else if(raj == "pedra" && she == "Spock") cout << "Bazinga!";

        else if(raj == "lagarto" && she == "papel") cout << "Raj trapaceou!";
        else if(raj == "lagarto" && she == "tesoura") cout << "Bazinga!";
        else if(raj == "lagarto" && she == "pedra") cout << "Bazinga!";
        else if(raj == "lagarto" && she == "Spock") cout << "Raj trapaceou!";

        else if(raj == "Spock" && she == "papel") cout << "Bazinga!";
        else if(raj == "Spock" && she == "tesoura") cout << "Raj trapaceou!";
        else if(raj == "Spock" && she == "pedra") cout << "Raj trapaceou!";
        else if(raj == "Spock" && she == "lagarto") cout << "Bazinga!";
        cout << endl;
    }
    return 0;
}
