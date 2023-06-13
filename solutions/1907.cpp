#include <bits/stdc++.h>
using namespace std;

#define MAX 1026
#define PII pair<int, int>

int n, m;

int bfs(bool visited[MAX][MAX])
{
    int colors = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            // Aplica BFS se pixel ainda não foi visitado
            if (!visited[i][j])
            {
                colors++;
                queue<PII> pixels;
                pixels.push({ i, j });
                visited[i][j] = true;

                while (!pixels.empty())
                {
                    int curr_x, curr_y;
                    tie(curr_x, curr_y) = pixels.front();
                    pixels.pop();

                    PII next[4] = { { curr_x, curr_y - 1 }, { curr_x, curr_y + 1 }, { curr_x + 1, curr_y }, { curr_x - 1, curr_y } };

                    for (int i = 0; i < 4; i++)
                    {
                        int x, y;
                        tie(x, y) = next[i];

                        if (!visited[x][y])
                        {
                            pixels.push({ x, y });
                            visited[x][y] = true;
                        }
                    }
                }
            }
        }
    }

    return colors;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    // Nenhum pixel foi visitado ainda
    bool visited[MAX][MAX];
    memset(visited, 1, MAX * MAX);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            char c;
            cin >> c;

            if (c == '.')
                visited[i][j] = false;
        }
    }

    cout << bfs(visited) << "\n";

    return 0;
}
