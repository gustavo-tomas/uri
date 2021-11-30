#include <bits/stdc++.h>
using namespace std;

int main()
{
    int door[2], mat[3];
    cin >> mat[0] >> mat[1] >> mat[2];
    cin >> door[0] >> door[1];
    sort(door, door + 2);
    sort(mat, mat + 3);
    if (door[1] >= mat[1] && door[0] >= mat[0])
        cout << "S" << endl;
    else
        cout << "N" << endl;
    return 0;
}
