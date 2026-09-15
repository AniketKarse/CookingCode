#include <stdio.h>
#include <stdlib.h>

#define MAX_CITIES 10
#define INF 999999

int n;

int dist[MAX_CITIES][MAX_CITIES];

int dp[1 << MAX_CITIES][MAX_CITIES];

int min(int a, int b) {
    return (a < b) ? a : b;
}

int tsp(int mask, int pos) {
    int VISITED_ALL = (1 << n) - 1;
    if (mask == VISITED_ALL) {
        return dist[pos][0];
    }

    if (dp[mask][pos] != -1) {
        return dp[mask][pos];
    }

    int min_cost = INF;

    for (int city = 0; city < n; city++) {
        if ((mask & (1 << city)) == 0) {
            int new_cost = dist[pos][city] + tsp(mask | (1 << city), city);
            min_cost = min(min_cost, new_cost);
        }
    }
    return dp[mask][pos] = min_cost;
}

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &dist[i][j]);
        }
    }

    for (int i = 0; i < (1 << n); i++) {
        for (int j = 0; j < n; j++) {
            dp[i][j] = -1;
        }
    }
    int optimal_cost = tsp(1, 0);

    printf("\nMinimum cost for TSP - %d\n", optimal_cost);

    return 0;
}
