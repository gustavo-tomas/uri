#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n, d;
    while(cin >> n >> d && n > 0){
        char num;
        vector<int> vec;
        
        int i = 0, curr;
        while(n--){
            cin >> num;
            vec.push_back((int) num - 48);

            while(d > 0 && i >= 1 && vec[i] > vec[i-1]){
                vec.erase(vec.begin()+i-1);
                d--;
                i--;
            }
            i++;
        }

        i = vec.size()-1;
        while(d > 0 && i >= 0 && vec[i] >= vec[i-1]){
            vec.erase(vec.begin()+i-1);
            d--;
            i--;
        }

        while(d > 0){
            vec.erase(vec.end()-1);
            d--;
        }

        for(auto i : vec) cout << i;
        cout << endl;
    }
    return 0;
}