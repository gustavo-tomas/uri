#include<bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    vector<string> fruits;
    while (n--) {
        string f;
        cin >> f;
        transform(f.begin(), f.end(), f.begin(), ::tolower);
        fruits.push_back(f);
    }

    set<string> eat;
    while (m--) {
        string line;
        cin >> line;
        transform(line.begin(), line.end(), line.begin(), ::tolower);
        for (auto f : fruits) {
            string r_line(line);
            reverse(r_line.begin(), r_line.end());
            
            if (line.find(f) != string::npos || r_line.find(f) != string::npos)
                eat.insert(f);
        }
    }

    for (auto f : fruits) {
        if (eat.find(f) != eat.end())
            cout << "Sheldon come a fruta " << f << "\n";
        else
            cout << "Sheldon detesta a fruta " << f << "\n";
    }

    return 0;
}
