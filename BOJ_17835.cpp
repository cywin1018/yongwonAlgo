#include<bits/stdc++.h>

using ll = long long;
using namespace std;

ll n, m, k;
vector<pair<ll, ll> > G[101010];
ll dist[101010];
ll cost[101010];
const ll INF = 1e18;

priority_queue<pair<ll, ll>, vector<pair<ll, ll> >, greater<pair<ll, ll> > > pq;

void Dijkstra() {
    while (!pq.empty()) {
        auto [v,c] = pq.top();
        pq.pop();
        if (dist[c] < v)continue;
        for (auto nxt: G[c]) {
            // 해당 g의 v u c 니까
            if (dist[nxt.first] > dist[c] + nxt.second) {
                dist[nxt.first] = dist[c] + nxt.second;
                pq.push({dist[nxt.first], nxt.first});
            }
        }
    }
}

int main() {
    cin >> n >> m >> k;

    fill(dist, dist + 101010, INF);

    for (int i = 0; i < m; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        G[v].push_back({u, c});
    }


    for (int i = 0; i < k; i++) {
        int num;
        cin >> num;
        dist[num] = 0;
        pq.push({0, num});
    }

    Dijkstra();
    ll idx = 0;
    ll mx = -1;
    for (int i = 1; i <= n; i++) {
        if (mx < dist[i]) {
            idx = i;
            mx = dist[i];
        }
    }
    cout << idx << "\n" << mx;
}
