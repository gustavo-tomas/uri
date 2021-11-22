#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<string> pokemons;
    while (n--)
    {
        string s;
        cin >> s;
        pokemons.insert(s);
    }
    printf("Falta(m) %d pomekon(s).\n", 151 - pokemons.size());
    return 0;
}
