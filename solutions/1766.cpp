#include <bits/stdc++.h>
using namespace std;

typedef struct struct_t{
    int weight;
    int age;
    double height;
    string name;
}struct_t;

bool compare_name(struct_t a, struct_t b){
    if(a.name < b.name) return true;
    return false;
}

bool compare_height(struct_t a, struct_t b){
    if(a.height < b.height) return true;
    if(a.height == b.height){
        return compare_name(a, b);
    }
    return false;
}

bool compare_age(struct_t a, struct_t b){
    if(a.age < b.age) return true;
    if(a.age == b.age){
        return compare_height(a, b);
    }
    return false;
}

bool compare_weigth(struct_t a, struct_t b){
    if(a.weight > b.weight) return true;
    if(a.weight == b.weight){
        return compare_age(a, b);
    }
    return false;
}

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, t, count=0;
    cin >> t;
    while (t--){
        count++;
        int weight, age;
        double height;
        string name;
        cin >> n >> m;
        vector<struct_t> deer;
        struct_t temp;
        
        while(n--){
            cin >> temp.name >> temp.weight >> temp.age >> temp.height;
            deer.push_back(temp);
        }

        sort(deer.begin(), deer.end(), compare_weigth);
        cout << "CENARIO {" << count << "}" << endl;
        for(int i=0; i<m; i++){
            cout << i+1 << " - " << deer[i].name << endl;
        }
    }
    return 0;
}
