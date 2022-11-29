#include <stdio.h>

int main(){
 
    int first, second, third;
    scanf("%d %d %d", &first, &second, &third);

    int happy = 0;
    if(first > second){
        if(second-third < first-second){
            happy = 1;
        }
        if(second <= third){
            happy = 1;
        }
    }
    else if(first == second){
        if(third > second){
            happy = 1;
        }
    }
    else{
        if(third-second >= second-first){
            happy = 1;
        }
    }
    if(happy) printf(":)\n");
    else printf(":(\n");
    
    return 0;
}