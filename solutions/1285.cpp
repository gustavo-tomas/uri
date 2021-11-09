#include <bits/stdc++.h>
using namespace std;

int repeated(int x) {
    map<int, int> digits;
    while (x > 0){
        int digit = x % 10;
        if (digits.count(digit)) {
            return 1;
        } else {
            digits[digit] = 1;
        }
        x /= 10;
    }
    return 0;
}

int main() {
    int a, b;
    while (cin >> a >> b){
        int count = 0;
        for (int i = a; i <= b; i++) {
            if (!repeated(i)) count++;
        }
        cout << count << endl;
    }
    return 0;
}