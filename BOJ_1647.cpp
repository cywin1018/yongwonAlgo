#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;
int P[101010];
int n, m, mx = 0;
vector<tuple<int, int, int> > E;

int Find(int v) {
    return v == P[v] ? v : P[v] = Find(P[v]);
}

bool Union(int u, int v) {
    return Find(u) != Find(v) && (P[P[u]] = P[v], true);
}

int Kruskal() {
    int ret = 0;
    for (int i = 1; i <= n; i++)P[i] = i;
    sort(E.begin(), E.end());
    for (auto [w,u,v]: E)
        if (Union(u, v)) {
            ret += w;
            mx = max(mx, w);
        }
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        E.push_back({c, a, b});
    }
    cout << Kruskal() - mx;
}
