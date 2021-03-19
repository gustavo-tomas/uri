#include<bits/stdc++.h>
using namespace std;

int hash_hour(string job){
    if(job == "bonecos") return 8;
    if(job == "arquitetos") return 4;
    if(job == "musicos") return 6;
    if(job == "desenhistas") return 12;
    return 0;
}

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, sum = 0;
    map<string, int> jobson;
    cin >> n;

    while(n--){
        int lifetime = 0;
        string slave, job;
        cin >> slave >> job >> lifetime;
        if(jobson.count(job) == 0) jobson[job] = lifetime;
        else jobson[job] += lifetime;
    }

    for(auto& i : jobson){
        sum += i.second/hash_hour(i.first); 
    }
    cout << sum << endl;
   
    return 0;
}
