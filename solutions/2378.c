#include <stdio.h>

int main(){

    int n, max, curr = 0;
    char ans = 'N';
    scanf("%d %d", &n, &max);
    while(n--){
        int out, in;
        scanf("%d %d", &out, &in);
        curr = curr - out + in;
        if(curr > max) ans = 'S';
    }
    printf("%c\n", ans);
    return 0;
}