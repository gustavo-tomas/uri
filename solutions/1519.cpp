#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    string line;
    while (getline(cin, line) && line[0] != '.') {
    
        map<char, string> abr;
        map<string, int> occ;
        
        stringstream ss(line), sr(line);
        string w;
        while (getline(ss, w, ' ')) {
            if (w.size() > 2) {
                if (occ.count(w)) occ[w]++;
                else occ[w] = 1;

                if (!abr.count(w[0])) abr[w[0]] = w;
                else if (occ[w] * (w.size() - 2) > occ[abr[w[0]]] * (abr[w[0]].size() - 2))
                    abr[w[0]] = w;
            }
        }

        int first = 1;
        while (getline(sr, w, ' ')) {
            if (!first) cout << " ";
            
            if (abr.count(w[0]) && abr[w[0]] == w) cout << w[0] << ".";
            else cout << w;
            first = 0;
        }

        cout << "\n" << abr.size() << "\n";
        for (auto& ab : abr)
            cout << ab.first << ". = " << ab.second << "\n";
   }

    return 0;
}
