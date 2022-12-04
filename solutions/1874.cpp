#include <bits/stdc++.h>
using namespace std;

int main() {

    int h, w, n;
    while (cin >> h >> w >> n) {
        
        int grid[h][w];
        for (int i = 0; i < h; i++)
            for (int j = 0; j < w; j++)
                cin >> grid[i][j];

        int nums[n], idx = 0;
        for (int i = 0; i < n; i++) cin >> nums[i];
        
        for (int i = 0; i < w && idx < n; i++)
            for (int j = 0; j < h && idx < n; j++)
                if (grid[h - j - 1][w - i - 1] == 0)
                    grid[h - j - 1][w - i - 1] = nums[idx++];

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cout << grid[i][j];
                if (j < w - 1) cout << " ";
                else cout << "\n";
            }
        }
    }

    return 0;
}
