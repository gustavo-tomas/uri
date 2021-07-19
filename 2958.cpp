#include <bits/stdc++.h>
using namespace std;

bool comparator(string a, string b){
    return a > b;
}

int main(){

    int n, m;
    cin >> n >> m;
    string problem;
    vector<string> life, duty;
    
    for(int i=0; i<n*m; i++){
        string problem;
        cin >> problem;
        if(problem[1] == 'V') life.push_back(problem);
        else duty.push_back(problem);
    }

    sort(life.begin(),life.end(), comparator);
    sort(duty.begin(),duty.end(), comparator);

    for(auto i : life) cout << i << endl;
    for(auto i : duty) cout << i << endl;

    return 0;
}
