#include <bits/stdc++.h>
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string book[100005];
    while(cin >> n){
        for(int i=0; i<n; i++) cin >> book[i];
        sort(book, book+n);
        for(int i=0; i<n; i++) cout << book[i] << endl;
    }
    return 0;
}
