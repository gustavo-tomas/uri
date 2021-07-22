#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){ 
    return (!a) ? b : gcd(b % a, a);
}

int main(){

    int n;
    cin >> n;
    while(n--){
        int n1, d1, n2, d2, dr = 0, nr = 0;
        char op;
        scanf("%d / %d %c %d / %d", &n1, &d1, &op, &n2, &d2);
        
        switch (op){
            case '+':
                nr = n1 * d2 + n2 * d1;
                dr = d1 * d2;
                break;
            case '-':
                nr = n1 * d2 - n2 * d1;
                dr = d1 * d2;
                break;
            case '*':
                nr = n1 * n2;
                dr = d1 * d2;
                break;
            case '/':
                nr = n1 * d2;
                dr = n2 * d1;
                break;
            default:
                break;
        }
        int div = abs(gcd(nr,dr));
        printf("%d/%d = %d/%d\n", nr, dr, nr/div, dr/div);
    }
    return 0;
}