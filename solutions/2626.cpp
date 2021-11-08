#include <bits/stdc++.h>
using namespace std;

int winner(string a, string b){
    if(a == "papel" && b == "pedra") return 1;
    if(a == "papel" && b == "tesoura") return 2;
    if(a == "tesoura" && b == "papel") return 1;
    if(a == "tesoura" && b == "pedra") return 2;
    if(a == "pedra" && b == "tesoura") return 1;
    if(a == "pedra" && b == "papel") return 2;
    return 0;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string dodo, leo, pepper;
    while (cin >> dodo >> leo >> pepper){
        if(!winner(dodo,leo) && !winner(dodo,pepper)){
            cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
        }
        else if(winner(dodo,leo) == 1 && winner(dodo,pepper) == 1){
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
        }
        else if(winner(dodo,leo) == 2 && winner(pepper,leo) == 2){
            cout << "Iron Maiden's gonna get you, no matter how far!" << endl;            
        }
        else if(winner(dodo,pepper) == 2 && winner(leo,pepper) == 2){
            cout << "Urano perdeu algo muito precioso..." << endl;            
        }
        else {
            cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;           
        }
    }
    
    return 0;
}
