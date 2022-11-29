#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    while (n--) {
        double a;
        cin >> a;
        double r = sqrt(a / (4.0 * 3.14));
        if (r < 12) {
            printf("vermelho = R$ %.2f\n", a * 0.09);
        } else if (r >= 12 && r <= 15) {
            printf("azul = R$ %.2f\n", a * 0.07);
        } else {
            printf("amarelo = R$ %.2f\n", a * 0.05);
        }
    }

    return 0;
}
