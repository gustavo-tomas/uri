#include<bits/stdc++.h>
using namespace std;

typedef struct struct_t{
    string name;
    int power, kill, death;
}struct_t;

bool compare_name(struct_t a, struct_t b){
    return a.name > b.name;
}

bool compare_death(struct_t a, struct_t b){
    if(a.death > b.death) return true;
    if(a.death < b.death) return false;
    return compare_name(a,b);
}

bool compare_kill(struct_t a, struct_t b){
    if(a.kill < b.kill) return true;
    if(a.kill > b.kill) return false;
    return compare_death(a,b);
}

bool compare_power(struct_t a, struct_t b){
    if(a.power < b.power) return true;
    if(a.power > b.power) return false;
    return compare_kill(a,b);
}

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    vector<struct_t> v;
    struct_t aux;

    for(int i=0; i<n; i++){
        cin >> aux.name >> aux.power >> aux.kill >> aux.death;
        v.push_back(aux);
    }
    sort(v.begin(), v.end(), compare_power);
    cout << v[n-1].name << endl;
 
    return 0;
}
