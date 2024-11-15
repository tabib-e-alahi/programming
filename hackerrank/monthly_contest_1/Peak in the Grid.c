#include <stdio.h>
int top(int grid[1000][1000], int i, int j, int n, int m) {
    if (i > 0 && grid[i][j] <= grid[i - 1][j]) {
        return 1;
    }
    return 0;
}

int bottom(int grid[1000][1000], int i, int j, int n, int m) {
    if (i < n - 1 && grid[i][j] <= grid[i + 1][j]) {
        return 1;
    }
    return 0;
}

int left(int grid[1000][1000], int i, int j, int n, int m) {
    if (j > 0 && grid[i][j] <= grid[i][j - 1]) {
        return 1;
    }
    return 0;
}

int right(int grid[1000][1000], int i, int j, int n, int m) {
    if (j < m - 1 && grid[i][j] <= grid[i][j + 1]) {
        return 1;
    }
    return 0;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int grid[1000][1000];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    int peakCount = 0;
    int peaks[1000][2];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            int isPeak = 1;
            if (top(grid, i, j, n, m) ||
                bottom(grid, i, j, n, m) ||
                left(grid, i, j, n, m) ||
                right(grid, i, j, n, m)) {
                isPeak = 0;
            }

            if (isPeak) {
                peaks[peakCount][0] = i + 1;
                peaks[peakCount][1] = j + 1;
                peakCount++;
            }
        }
    }

    for (int i = 0; i < peakCount; i++) {
        printf("%d %d\n", peaks[i][0], peaks[i][1]);
    }
    printf("%d\n", peakCount);

    return 0;
}
