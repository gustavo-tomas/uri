#include <bits/stdc++.h>
using namespace std;

// Team, points, cestas marcadas, cestas recebidas
typedef tuple<int, int, int, int> tii;

bool cmp(tii a, tii b)
{
    auto& [id_a, points_a, score_a, minus_a] = a;
    auto& [id_b, points_b, score_b, minus_b] = b;

    double avg_a = (double) score_a / (double) clamp(minus_a, 1, minus_a);
    double avg_b = (double) score_b / (double) clamp(minus_b, 1, minus_b);

    if (points_a > points_b)
        return true;

    else if (points_a < points_b)
        return false;

    else if (avg_a > avg_b)
        return true;

    else if (avg_a < avg_b)
        return false;

    else if (score_a > score_b)
        return true;

    else if (score_a > score_b)
        return false;

    else if (id_a < id_b)
        return true;

    else
        return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, instance = 0;
    while (cin >> n && n > 0)
    {
        vector<tii> teams(n + 1, make_tuple(0, 0, 0, 0));
        for (int i = 0; i < n * (n - 1) / 2; i++)
        {
            int team_1, score_1, team_2, score_2;
            cin >> team_1 >> score_1 >> team_2 >> score_2;

            auto& [id_1, total_points_1, total_score_1, total_minus_1] = teams[team_1];
            auto& [id_2, total_points_2, total_score_2, total_minus_2] = teams[team_2];

            id_1 = team_1;
            id_2 = team_2;

            total_points_1++;
            total_points_2++;

            total_score_1 += score_1;
            total_score_2 += score_2;

            total_minus_1 += score_2;
            total_minus_2 += score_1;

            if (score_1 > score_2)
                total_points_1++;

            else
                total_points_2++;
        }

        sort(teams.begin() + 1, teams.end(), cmp);

        if (instance > 0)
            cout << "\n";

        cout << "Instancia " << ++instance << "\n";
        for (int i = 1; i <= n; i++)
        {
            if (i > 1)
                cout << " ";

            auto& [id, pointss, score, minus] = teams[i];
            cout << id;
        }
        cout << "\n";
    }

    return 0;
}
