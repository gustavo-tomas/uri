#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    while(cin >> n && n > 0){
        int peak = 0, val;
        vector<int> wave;
        for(int i=0; i<n; i++){
            cin >> val;
            wave.push_back(val);
        }

        wave.push_back(wave[0]);
        wave.insert(wave.begin(),wave[n-1]);

        for(int i=1; i<wave.size()-1; i++){
            if( max({wave[i],wave[i-1],wave[i+1]}) == wave[i] ||
                min({wave[i],wave[i-1],wave[i+1]}) == wave[i]){
                peak++;
            }
        }
        cout << peak << endl;
    }
    return 0;
}