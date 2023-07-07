#include <bits/stdc++.h>
using namespace std;

#define TOL 1e-5

int main()
{
    int n, a;
    while (cin >> n >> a && (n || a))
    {
        double arr[n + 5], check = 0.0, largest = -1.0;
        for (int i = 0; i < n; i++)
        {
            scanf("%lf", &arr[i]);
            check += arr[i];
            largest = max(largest, arr[i]);
        }

        if (check == a)
            printf(":D\n");

        else if (check < a)
            printf("-.-\n");

        else
        {
            sort(arr, arr + n);

            double l = 0.0, r = largest, mid;
            while (l <= r)
            {
                mid = (l + r) / 2.0;

                double sum = 0.0;
                for (int i = n - 1; i >= 0 && arr[i] > mid; i--)
                    sum += arr[i] - mid;

                if (fabs(sum - (double) a) <= TOL)
                    break;

                else if (sum < (double) a)
                    r = mid;

                else
                    l = mid;
            }

            printf("%.4lf\n", mid);
        }
    }

    return 0;
}
