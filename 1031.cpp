#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    while(cin >> n && n > 0){
        vector<int> people, backup;
        for(int i=1; i<=n; i++) people.push_back(i);
        backup = people;

        int k = 1, curr;
        while(people.size() > 1){
            curr = 0;
            while(people.size() > 1){
                people.erase(people.begin() + curr);
                curr = (curr + k - 1) % people.size();
            }
            if(people[0] != 13)
                people = backup;
            else
                cout << k << endl;
            k++;
        }
    }
    return 0;
}