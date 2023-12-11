#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

#define LIM 1000000007

using namespace std;

void dfs(vector<vector<int>> &G, vector<bool> &visited, vector<int> &prev, int v) {
    visited[v] = true;
    for (int u: G[v]) {
        if (!visited[u]) {
            prev[u] = v;
            dfs(G, visited, prev, u);
        }
    }
    return;
}
