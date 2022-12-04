#include <bits/stdc++.h>
using namespace std;

// yes, i know
int bubble_sort(int* start, int* end, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (end[j] == start[n-i-1] && j != n - i - 1) {
                int temp = end[j];
                end[j] = end[j+1];
                end[j+1] = temp;
                count++;
            }
        }
    }
    return count;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    while (cin >> n) {
        int start[50], end[50];
        for (int i = 0; i < n; i++) cin >> start[i];
        for (int i = 0; i < n; i++) cin >> end[i];
        cout << bubble_sort(start, end, n) << "\n";
    }

    return 0;
}
