#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long

#define INF (1ll << 60)

using namespace std;

vector<ll> dijkstra(vector<vector<pair<ll,int>>> &G, int n, int s) {//, int t) {
    vector<ll> distances(n+1, INF);
    //vector<int> prev(n+1, -1);
    vector<bool> visited(n+1, false);
    priority_queue<pair<ll,int>> pq;

    pq.push(make_pair(0, s));
    distances[s] = 0;

    while (!pq.empty()) {
        auto [d, v] = pq.top();
        pq.pop();
        
        if (visited[v])
            continue;

        visited[v] = true;

        for (auto [w, u]: G[v]) {
            if (distances[u] > distances[v] + w) {
                distances[u] = distances[v] + w;
                //prev[u] = v;
                pq.push(make_pair(-distances[u], u));
            }
        }
    }

    return distances;
    /*
    if (distances[t] >= INF)
        return vector<int>();

    deque<int> path;
    int current = t;
    while (current != s) {
        path.push_front(current);
        current = prev[current];
    }
    path.push_front(s);
    return vector<int>(path.begin(), path.end());
    */
}