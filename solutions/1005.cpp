#include <iostream>
 
using namespace std;
 
int main() {
 
    double a, b, avg;
    cin >> a >> b;
    avg = (a*3.5 + b*7.5)/11.0;
    
    printf("MEDIA = %.5lf\n", avg);
 
    return 0;
}
