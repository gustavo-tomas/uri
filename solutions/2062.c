#include <stdio.h>
#include <string.h>

int main(){

    int n;
    char s[25];
    scanf("%d", &n);
    while(n--){
        scanf("%s", s);
        if(strlen(s) == 3){
            if(s[0] == 'O' && s[1] == 'B') printf("OBI");
            else if(s[0] == 'U' && s[1] == 'R') printf("URI");
            else printf("%s", s);
        } else {
            printf("%s", s);
        }
        if(n >= 1) printf(" ");
        else printf("\n");
    }
    
    return 0;
}
