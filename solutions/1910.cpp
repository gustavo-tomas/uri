#include <bits/stdc++.h>
using namespace std;

#define MAX 100000
#define PII pair<int, int>

int o, d, k;

int bfs(bool visited[MAX + 5])
{
    queue<PII> q;
    q.push({o, 0});

    while (!q.empty())
    {
        int channel, clicks;
        tie(channel, clicks) = q.front();
        q.pop();

        if (channel == d)
            return clicks;

        // Verifica todos os canais ainda não visitados
        int next_channel[5] = { channel - 1, channel + 1, channel * 2, channel * 3, channel / 2 };

        int i;
        for (i = 0; i < 4; i++)
        {
            if (next_channel[i] >= 1 && next_channel[i] <= MAX && !visited[next_channel[i]])
            {
                q.push({ next_channel[i], clicks + 1 });
                visited[next_channel[i]] = true;
            }
        }

        if (channel % 2 == 0 && !visited[next_channel[i]])
        {
            q.push({ next_channel[i], clicks + 1 });
            visited[next_channel[i]] = true;
        }
    }

    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (cin >> o >> d >> k && (o || d || k))
    {
        bool visited[MAX + 5] = { };
        for (int i = 0; i < k; i++)
        {
            int f;
            cin >> f;
            visited[f] = true;
        }

        cout << bfs(visited) << "\n";
    }

    return 0;
}
