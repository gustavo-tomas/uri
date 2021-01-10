#include <bits/stdc++.h>
using namespace std;

typedef struct struct_t{
    string color = "";
    string size = "";
    string name = "";
}struct_t;

bool compare_names (struct_t s1, struct_t s2){
    if(s1.name < s2.name) return true;
    return false;
}

bool compare_sizes (struct_t s1, struct_t s2){
    if(s1.size == "P" && s2.size != "P") return true;
    if(s1.size == "M" && s2.size == "G") return true;
    return false;
}

bool compare_colors (struct_t s1, struct_t s2){
    if(s1.color == "branco" && s2.color != "branco") return true;
    return false;
}

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    while(n > 0){
        list<struct_t> shirts;
        while(n--){
            struct_t s;
            getline(cin, s.name, '\n');
            getline(cin, s.name, '\n');
            cin >> s.color >> s.size;
        
            shirts.push_back(s);
        }

        shirts.sort(compare_names);
        shirts.sort(compare_sizes);
        shirts.sort(compare_colors);

        for(auto i : shirts){
            cout << i.color << " " << i.size << " " << i.name << endl;
        }

        cin >> n;

        if(n > 0) cout << endl;
    }

    return 0;
}
