#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

#define LIM 1000000007
#define INF (1ll << 60)

using namespace std;

vector<vector<ll>> floyd_warshall(vector<vector<ll>> &adj, int n) {
    vector<vector<ll>> distances(n+1, vector<ll>(n+1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j)
                distances[i][j] = 0;
            else if (adj[i][j] != 0)
                distances[i][j] = adj[i][j];
            else
                distances[i][j] = INF;
        }
    }

    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                distances[i][j] = min(distances[i][j], distances[i][k]+distances[k][j]);

    return distances;
}