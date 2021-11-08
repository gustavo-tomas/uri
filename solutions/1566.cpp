#include<bits/stdc++.h>
using namespace std;

void count_sort(vector<int>& arr){
    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    int r = max - min + 1;

    vector<int> count(r), output(arr.size());
    for (int i = 0; i < arr.size(); i++) 
        count[arr[i] - min]++; 
  
    for (int i = 1; i < count.size(); i++) 
        count[i] += count[i - 1]; 
  
    for (int i = arr.size() - 1; i >= 0; i--) { 
        output[count[arr[i] - min] - 1] = arr[i]; 
        count[arr[i] - min]--; 
    } 
  
    for (int i = 0; i < arr.size(); i++) 
        arr[i] = output[i];
}

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, n, val, i, aux;
    vector<int> pop;
    cin >> t;
    
    while(t--){
        cin >> n;

        for(i=0; i<n; i++){
            cin >> aux;
            pop.push_back(aux);
        }
    
        count_sort(pop);

        for(i = 0; i < n; i++) {
            if(i != 0) cout << " " << pop[i];
            else cout << pop[i];
        }
        cout << endl;
        pop.clear();
    }

    return 0;
}
