#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define pipii pair<int,pair<int,int>>
#define ll long long

#define INF 1000000

using namespace std;

bool bellmand_ford(vector<pipii> &edges, int n, int m, int s) {
    vector<int> distances(n+1, INF);
    vector<int> prev(n+1, 0);
    
    distances[s] = 0;
    for (int i = 0; i < n-1; i++) {
        for (int e = 0; e < m; e++) {
            int w = edges[e].first;
            int u = edges[e].second.first;
            int v = edges[e].second.second;
            if (distances[u] < INF) {
                if (distances[u]+w < distances[v]) {
                    distances[v] = distances[u]+w;
                    prev[v] = u;
                }
            }
        }
    }

    return distances;
}