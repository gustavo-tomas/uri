#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int m, n, games = 8;
    string players = "ABCDEFGHIJKLMNOP", new_players = "";
    for (int i = 1, pos = 0; i <= 15; i++, pos += 2) {
        cin >> m >> n;

        pos = pos % players.size();

        if (m > n) new_players += players[pos];
        else new_players += players[pos + 1];

        if (16 - i == games) {
            games /= 2;
            players = new_players;
            new_players = "";
        }
    }
    cout << players << endl;

    return 0;
}
