#include<bits/stdc++.h>
using namespace std;

int true_val(char let){
    if(let == 'a' || let == 'j' || let == 's') return 1;
    if(let == 'b' || let == 'k' || let == 't') return 2;
    if(let == 'c' || let == 'l' || let == 'u') return 3;
    if(let == 'd' || let == 'm' || let == 'v') return 4;
    if(let == 'e' || let == 'n' || let == 'w') return 5;
    if(let == 'f' || let == 'o' || let == 'x') return 6;
    if(let == 'g' || let == 'p' || let == 'y') return 7;
    if(let == 'h' || let == 'q' || let == 'z') return 8;
    if(let == 'i' || let == 'r') return 9;
    return 0;
}

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    while(getline(cin,s)){
        int sum=0;
        for(int i=0; i<s.size(); i++) s[i] = tolower(s[i]);
        for(int i=0; i<s.size(); i++){
            sum += true_val(s[i]);
        }

        int aux_sum;
        while(sum >= 10){
            aux_sum = sum;
            sum = 0;
            while(aux_sum > 0){
                sum += aux_sum % 10;
                aux_sum /= 10;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
