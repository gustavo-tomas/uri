#include <bits/stdc++.h>
using namespace std;

#define LL long long int 
#define ULL unsigned long long int 

void bubbleSort (int student[], int n){

    int flag = 0;
    for(int i=0; i<n && !flag; i++){
        flag = 1;
        for(int j=0; j<n-i-1; j++){
            if(student[j] < student[j+1]){
                int temp = student[j];
                student[j] = student[j+1];
                student[j+1] = temp;
                flag = 0;
            }
        }
    }
}

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t, student[1234], copy[1234];
    cin >> t;
    while(t--){
        int count = 0;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> student[i];
            copy[i] = student[i];
        }
        
        bubbleSort(student, n);
        
        for(int i=0; i<n; i++){
            if(copy[i] == student[i]) count++;
        }
        cout << count << endl;
    }
    return 0;
}
