#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, count=0, aux;
    vector<int> points;
    cin >> n >> k;
    
    for(int i=1; i<=n; i++){
        cin >> aux;
        points.push_back(aux);
    }
    sort(points.begin(), points.end(), greater<int>());

    int i = k-1;
    while(i+1 < n && points[i] == points[i+1]){
        count++;
        i++;
    }

    cout << count + k << endl;

    return 0;
}
