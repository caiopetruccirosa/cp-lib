#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

#define LIM 1000000007

using namespace std;

vector<int> bfs(vector<vector<int>> &G, int n, int s, int t) {
    vector<bool> visited(n+1, false);
    vector<int> prev(n+1);
    queue<int> q;

    visited[s] = true;
    q.push(s);

    bool has_path = false;
    while (!q.empty() && !has_path) {
        int v = q.front();
        q.pop();
        for (int u: G[v]) {
            if (!visited[u]) {
                q.push(u);
                visited[u] = true;
                prev[u] = v;
                if (u == t) {
                    has_path = true;
                }
            }
        }
    }

    if (!has_path)
        return vector<int>();

    deque<int> path;
    int current = t;
    while (current != s) {
        path.push_front(current);
        current = prev[current];
    }
    path.push_front(s);
    return vector<int>(path.begin(), path.end());
}