#include <stdio.h>

int gcd(int a, int b) { 
    return (!a) ? b : gcd(b % a, a);
}

int main(){

    int t, a, b;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", gcd(a,b));
    }

    return 0;
}
