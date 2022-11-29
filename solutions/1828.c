#include <stdio.h>
#include <string.h>

int main(){

    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        char raj[500], she[500];
        scanf("%s %s", she, raj);
        printf("Caso #%d: ", i);
        if(!strcmp(raj, she)) printf("De novo!\n");
        
        else if(!strcmp(raj, "papel") && !strcmp(she, "tesoura")) printf("Bazinga!\n");
        else if(!strcmp(raj, "papel") && !strcmp(she, "pedra")) printf("Raj trapaceou!\n");
        else if(!strcmp(raj, "papel") && !strcmp(she, "lagarto")) printf("Bazinga!\n");
        else if(!strcmp(raj, "papel") && !strcmp(she, "Spock")) printf("Raj trapaceou!\n");
    
        else if(!strcmp(raj, "tesoura") && !strcmp(she, "papel")) printf("Raj trapaceou!\n");
        else if(!strcmp(raj, "tesoura") && !strcmp(she, "pedra")) printf("Bazinga!\n");
        else if(!strcmp(raj, "tesoura") && !strcmp(she, "lagarto")) printf("Raj trapaceou!\n");
        else if(!strcmp(raj, "tesoura") && !strcmp(she, "Spock")) printf("Bazinga!\n");

        else if(!strcmp(raj, "pedra") && !strcmp(she, "papel")) printf("Bazinga!\n");
        else if(!strcmp(raj, "pedra") && !strcmp(she, "tesoura")) printf("Raj trapaceou!\n");
        else if(!strcmp(raj, "pedra") && !strcmp(she, "lagarto")) printf("Raj trapaceou!\n");
        else if(!strcmp(raj, "pedra") && !strcmp(she, "Spock")) printf("Bazinga!\n");

        else if(!strcmp(raj, "lagarto") && !strcmp(she, "papel")) printf("Raj trapaceou!\n");
        else if(!strcmp(raj, "lagarto") && !strcmp(she, "tesoura")) printf("Bazinga!\n");
        else if(!strcmp(raj, "lagarto") && !strcmp(she, "pedra")) printf("Bazinga!\n");
        else if(!strcmp(raj, "lagarto") && !strcmp(she, "Spock")) printf("Raj trapaceou!\n");

        else if(!strcmp(raj, "Spock") && !strcmp(she, "papel")) printf("Bazinga!\n");
        else if(!strcmp(raj, "Spock") && !strcmp(she, "tesoura")) printf("Raj trapaceou!\n");
        else if(!strcmp(raj, "Spock") && !strcmp(she, "pedra")) printf("Raj trapaceou!\n");
        else if(!strcmp(raj, "Spock") && !strcmp(she, "lagarto")) printf("Bazinga!\n");
    }
    return 0;
}
