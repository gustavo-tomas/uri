#include <bits/stdc++.h>
using namespace std;

int main(){

    int t, n, k;
    cin >> t;
    for(int it=1; it<=t; it++){
        cin >> n >> k;
        vector<int> people;
        for(int i=0; i<n; i++) people.push_back(i);

        int curr = 0;
        while(people.size() > 1){
            curr = (curr + k - 1) % people.size();
            people.erase(people.begin() + curr);
        }
        cout << "Case " << it << ": " << people[0]+1 << endl;
    }

    return 0;
}