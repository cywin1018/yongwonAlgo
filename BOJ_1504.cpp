#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const int INF = 987654321;
using namespace std;


vector<pii > vp[808];
int dist[808];

int n, e, v1, v2;

int Dijkstra(int st, int ed) {
    for (int i = 1; i <= n; i++)dist[i] = INF;
    priority_queue<pii, vector<pii >, greater<> > pq;
    dist[st] = 0;
    pq.push({0, st});
    while (!pq.empty()) {
        auto [c,v] = pq.top();
        pq.pop();
        for (auto [i,w]: vp[v]) {
            if (dist[i] > dist[v] + w) {
                dist[i] = dist[v] + w;

                pq.push({dist[i], i});
            }
        }
    }
    return dist[ed];
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);

    cin >> n >> e;
    for (int i = 0; i < e; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        vp[a].push_back({b, c});
        vp[b].push_back({a, c});
    }

    cin >> v1 >> v2;

    int a1 = Dijkstra(1, v1), a2 = Dijkstra(v1, v2), a3 = Dijkstra(v2, n);
    int ans1 = 0;
    if (a1 == INF || a2 == INF || a3 == INF)ans1 = INF;
    else ans1 = a1 + a2 + a3;

    int b1 = Dijkstra(1, v2), b2 = Dijkstra(v2, v1), b3 = Dijkstra(v1, n);
    int ans2 = 0;
    if (b1 == INF || b2 == INF || b3 == INF)ans2 = INF;
    else ans2 = b1 + b2 + b3;

    if (ans1 == INF || ans2 == INF)
        cout << -1;
    else
        cout << min(ans1, ans2);
}
