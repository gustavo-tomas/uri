#include <stdio.h>
#include <string.h>

int main() {

    int n, first = 1;
    while (scanf("%d", &n) && n > 0) {
        char words[n][60];
        int largest = 0;
        if (!first) printf("\n");
        for (int i = 0; i < n; i++) {
            scanf("%s", words[i]);
            largest = largest > strlen(words[i]) ? largest : strlen(words[i]);
        }
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < largest - strlen(words[j]); i++) {
                printf(" ");
            }
            printf("%s\n", words[j]);
        }
        first = 0;
    }

    return 0;
}
