#include<bits/stdc++.h>
using namespace std;

int main(){
 
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // cout.tie(NULL);
    
    int a;
    float b;
    char c, d[123];

    scanf("%d %f %c %[^\n]s", &a, &b, &c, d);
    printf("%d%.6f%c%s\n", a, b, c, d);
    printf("%d\t%.6f\t%c\t%s\n", a, b, c, d);
    printf("%*d%*.6f%*c%*s\n", 10, a, 10, b, 10, c, 10, d);
    
    return 0;
}
