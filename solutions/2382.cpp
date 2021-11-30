#include <bits/stdc++.h>
using namespace std;

int main()
{
    int box[3], r;
    cin >> box[0] >> box[1] >> box[2] >> r;
    sort(box, box + 3);
    if (box[2] * box[2] / 4 + box[1] * box[1] / 4 <= r * r)
        cout << "S" << endl;
    else
        cout << "N" << endl;
    return 0;
}
