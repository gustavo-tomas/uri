#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string raj, she;
        cin >> raj >> she;
        if(raj == she) cout << "empate" << endl;
        
        else if(raj == "papel" && she == "tesoura") cout << "sheldon" << endl;
        else if(raj == "papel" && she == "pedra") cout << "rajesh" << endl;
        else if(raj == "papel" && she == "lagarto") cout << "sheldon" << endl;
        else if(raj == "papel" && she == "spock") cout << "rajesh" << endl;
    
        else if(raj == "tesoura" && she == "papel") cout << "rajesh" << endl;
        else if(raj == "tesoura" && she == "pedra") cout << "sheldon" << endl;
        else if(raj == "tesoura" && she == "lagarto") cout << "rajesh" << endl;
        else if(raj == "tesoura" && she == "spock") cout << "sheldon" << endl;

        else if(raj == "pedra" && she == "papel") cout << "sheldon" << endl;
        else if(raj == "pedra" && she == "tesoura") cout << "rajesh" << endl;
        else if(raj == "pedra" && she == "lagarto") cout << "rajesh" << endl;
        else if(raj == "pedra" && she == "spock") cout << "sheldon" << endl;

        else if(raj == "lagarto" && she == "papel") cout << "rajesh" << endl;
        else if(raj == "lagarto" && she == "tesoura") cout << "sheldon" << endl;
        else if(raj == "lagarto" && she == "pedra") cout << "sheldon" << endl;
        else if(raj == "lagarto" && she == "spock") cout << "rajesh" << endl;

        else if(raj == "spock" && she == "papel") cout << "sheldon" << endl;
        else if(raj == "spock" && she == "tesoura") cout << "rajesh" << endl;
        else if(raj == "spock" && she == "pedra") cout << "rajesh" << endl;
        else if(raj == "spock" && she == "lagarto") cout << "sheldon" << endl;

        else if(she == "papel" && raj == "tesoura") cout << "rajesh" << endl;
        else if(she == "papel" && raj == "pedra") cout << "sheldon" << endl;
        else if(she == "papel" && raj == "lagarto") cout << "rajesh" << endl;
        else if(she == "papel" && raj == "spock") cout << "sheldon" << endl;

        else if(she == "tesoura" && raj == "papel") cout << "sheldon" << endl;
        else if(she == "tesoura" && raj == "pedra") cout << "rajesh" << endl;
        else if(she == "tesoura" && raj == "lagarto") cout << "sheldon" << endl;
        else if(she == "tesoura" && raj == "spock") cout << "rajesh" << endl;

        else if(she == "pedra" && raj == "papel") cout << "rajesh" << endl;
        else if(she == "pedra" && raj == "tesoura") cout << "sheldon" << endl;
        else if(she == "pedra" && raj == "lagarto") cout << "sheldon" << endl;
        else if(she == "pedra" && raj == "spock") cout << "rajesh" << endl;

        else if(she == "lagarto" && raj == "papel") cout << "sheldon" << endl;
        else if(she == "lagarto" && raj == "tesoura") cout << "rajesh" << endl;
        else if(she == "lagarto" && raj == "pedra") cout << "rajesh" << endl;
        else if(she == "lagarto" && raj == "spock") cout << "sheldon" << endl;

        else if(she == "spock" && raj == "papel") cout << "rajesh" << endl;
        else if(she == "spock" && raj == "tesoura") cout << "sheldon" << endl;
        else if(she == "spock" && raj == "pedra") cout << "sheldon" << endl;
        else if(she == "spock" && raj == "lagarto") cout << "rajesh" << endl;
    }
    return 0;
}
