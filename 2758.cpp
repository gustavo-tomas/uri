#include <bits/stdc++.h>
using namespace std;
#define ULL unsigned long long int

int main(){

    float a, b;
    double c, d;
    cin >> a >> b >> c >> d;

    printf("A = %f, B = %f\n", a, b); // proc 7
    printf("C = %lf, D = %lf\n", c, d); // proc 8
    printf("A = %.1f, B = %.1f\n", a, b); // 9
    printf("C = %.1lf, D = %.1lf\n", c, d); // 10
    printf("A = %.2f, B = %.2f\n", a, b); // 11
    printf("C = %.2lf, D = %.2lf\n", c, d); // 12
    printf("A = %.3f, B = %.3f\n", a, b); // 13
    printf("C = %.3lf, D = %.3lf\n", c, d); // 14

    cout << scientific << setprecision(3) << setiosflags(ios::uppercase);
    cout << "A = " << a << ", B = " << b << endl;
    cout << "C = " << c << ", D = " << d << endl;

    printf("A = %.0f, B = %.0f\n", a, b); // 17
    printf("C = %.0lf, D = %.0lf\n", c, d); // 18
    
    return 0;
}
