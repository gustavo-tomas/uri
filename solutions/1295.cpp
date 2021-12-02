#include <bits/stdc++.h>
using namespace std;

// adapted from
// https://cp-algorithms.com/geometry/nearest_points.html
// https://en.wikipedia.org/wiki/Closest_pair_of_points_problem

struct pt
{
    double x, y;
};

bool cmp_x(pt a, pt b)
{
    return a.x < b.x || (a.x == b.x && a.y < b.y);
}

bool cmp_y(pt a, pt b)
{
    return a.y < b.y;
}

int n;
double mindist;
vector<pt> a, t;

void upd_ans(const pt &a, const pt &b)
{
    double dist = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    mindist = min(mindist, dist);
}

void rec(int l, int r)
{
    if (r - l <= 3)
    {
        for (int i = l; i < r; ++i)
            for (int j = i + 1; j < r; ++j)
                upd_ans(a[i], a[j]);
        sort(a.begin() + l, a.begin() + r, cmp_y);
        return;
    }

    int m = (l + r) >> 1;
    double midx = a[m].x;
    rec(l, m);
    rec(m, r);

    merge(a.begin() + l, a.begin() + m, a.begin() + m, a.begin() + r, t.begin(), cmp_y);
    copy(t.begin(), t.begin() + r - l, a.begin() + l);

    int tsz = 0;
    for (int i = l; i < r; ++i)
    {
        if (abs(a[i].x - midx) < mindist)
        {
            for (int j = tsz - 1; j >= 0 && a[i].y - t[j].y < mindist; j--)
                upd_ans(a[i], t[j]);
            t[tsz++] = a[i];
        }
    }
}

int main()
{
    while (cin >> n && n)
    {
        t.clear();
        a.clear();
        double x, y;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            pt point;
            point.x = x;
            point.y = y;
            a.push_back(point);
        }

        t.resize(n);
        sort(a.begin(), a.end(), cmp_x);
        mindist = 10000;
        rec(0, n);

        if (mindist >= 10000)
            cout << "INFINITY" << endl;
        else
            cout << fixed << setprecision(4) << mindist << endl;
    }
    return 0;
}
