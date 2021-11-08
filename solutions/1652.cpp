#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int k, n;
    cin >> k >> n;
    map<string,string> word;
    string w, p;

    for(int i=0; i<k; i++){
        cin >> w >> p;
        word[w] = p;
    }

    for(int i=0; i<n; i++){
        cin >> w;
        if(word.count(w)) cout << word[w] << endl;
        else if (w[w.size()-1] == 'y' && w[w.size()-2] != 'a'
                && w[w.size()-2] != 'a' && w[w.size()-2] != 'e'
                && w[w.size()-2] != 'i' && w[w.size()-2] != 'o'
                && w[w.size()-2] != 'u'){
            w[w.size()-1] = 'i';
            cout << w << "es" << endl;
        }
        else if(w[w.size()-1] == 'o' || w[w.size()-1] == 's'
                || (w[w.size()-2] == 'c' && w[w.size()-1] == 'h')
                || (w[w.size()-2] == 's' && w[w.size()-1] == 'h')
                || w[w.size()-1] == 'x'){
            w += "es";
            cout << w << endl;
        }
        else cout << w << "s" << endl;
    }
   
    return 0;
}
