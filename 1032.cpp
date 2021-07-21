#include <bits/stdc++.h>
using namespace std;

int prime(int x){
    if(x == 1) return 0;
    if(x % 2 == 0) return (x == 2) ? 1 : 0;   
    for(int i=3; i<=sqrt(x); i++){
        if(x % i == 0) return 0;
    }
    return 1;
}

vector<int> prime_list(int n){
    vector<int> primes;
    int i = 2;
    while(n > 0){
        if(prime(i)){
            primes.push_back(i);
            n--;
        }
        i++;
    }
    return primes;
}

vector<int> primes;

int main(){

    int n;
    while(cin >> n && n > 0){
        vector<int> people;
        for(int i=0; i<n; i++) people.push_back(i+1);
        primes = prime_list(n-1);

        int curr = 0, k = 0;
        while(people.size() > 1){
            curr = (curr + primes[k++] - 1) % people.size();
            people.erase(people.begin() + curr);
        }
        cout << people[0] << endl;
    }

    return 0;
}