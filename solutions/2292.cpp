#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    while (n--) {
        unsigned long long blinks;
        string num;
        cin >> num >> blinks;

        unsigned long long dec_num = 0, max_num = powl(2, num.size());
        for (int i = 0; i < num.size(); i++)
            if (num[i] == 'O')
                dec_num += powl(2, i);

        dec_num = (dec_num % max_num + blinks % max_num) % max_num;
        string binary = bitset<64>(dec_num).to_string();

        int count = 0;
        while (count < num.size()) {
            if (binary[binary.size() - count - 1] == '0')
                cout << 'X';
            else
                cout << 'O';
            count++;
        }
        cout << "\n";
    }

    return 0;
}
