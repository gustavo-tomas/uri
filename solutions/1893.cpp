#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int v1, v2;
    cin >> v1 >> v2;
    if (v2 >= 0 && v2 <= 2)
        cout << "nova\n";
    else if (v2 >= v1 && v2 >= 3 && v2 <= 96)
        cout << "crescente\n";
    else if (v2 >= 97)
        cout << "cheia\n";
    else
        cout << "minguante\n";
    
    return 0;
}
