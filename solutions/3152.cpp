#include <bits/stdc++.h>
using namespace std;

double dist(double ax, double bx, double ay, double by) {
    return sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
}

double area(double a, double b, double c, double p) {
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {

    int terr_a_x[4], terr_a_y[4], terr_b_x[4], terr_b_y[4];
    
    for (int i = 0; i < 4; i++) cin >> terr_a_x[i] >> terr_a_y[i];
    for (int i = 0; i < 4; i++) cin >> terr_b_x[i] >> terr_b_y[i];

    // Area of A
    double ab = dist(terr_a_x[0], terr_a_x[1], terr_a_y[0], terr_a_y[1]);
    double bc = dist(terr_a_x[1], terr_a_x[2], terr_a_y[1], terr_a_y[2]);
    double cd = dist(terr_a_x[2], terr_a_x[3], terr_a_y[2], terr_a_y[3]);
    double da = dist(terr_a_x[3], terr_a_x[0], terr_a_y[3], terr_a_y[0]);
    double db = dist(terr_a_x[3], terr_a_x[0], terr_a_y[3], terr_a_y[0]);

    double p1 = da + ab + db / 2.0;
    double p2 = db + bc + cd / 2.0;
    double tot_a = area(da, ab, db, p1) + area(db, bc, cd, p2);

    // Area of B
    ab = dist(terr_b_x[0], terr_b_x[1], terr_b_y[0], terr_b_y[1]);
    bc = dist(terr_b_x[1], terr_b_x[2], terr_b_y[1], terr_b_y[2]);
    cd = dist(terr_b_x[2], terr_b_x[3], terr_b_y[2], terr_b_y[3]);
    da = dist(terr_b_x[3], terr_b_x[0], terr_b_y[3], terr_b_y[0]);
    db = dist(terr_b_x[3], terr_b_x[0], terr_b_y[3], terr_b_y[0]);

    p1 = da + ab + db / 2.0;
    p2 = db + bc + cd / 2.0;
    double tot_b = area(da, ab, db, p1) + area(db, bc, cd, p2);
    
    if (tot_a > tot_b) cout << "terreno A\n";
    else cout << "terreno B\n";

    return 0;
}
