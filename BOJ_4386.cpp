#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

int n;
int P[101];
vector<pair<double, double> > vp;
vector<tuple<double, int, int> > E;

int Find(int v) {
    if (v == P[v])return v;
    return P[v] = Find(P[v]);
}

void Union(int u, int v) {
    u = Find(u);
    v = Find(v);

    if (u < v)P[v] = u;
    else P[u] = v;
}

bool isCycle(int u, int v) {
    u = Find(u);
    v = Find(v);

    if (u == v) {
        return true;
    }
    return false;
}


double Kruskal() {
    double ret = 0;

    sort(E.begin(), E.end());
    for (auto [w,u,v]: E) {
        if (isCycle(u, v)) continue;
        ret += w;
        Union(u, v);

        // cout << ret << " ";
    }

    return ret;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    double ans = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        double x, y;
        cin >> x >> y;
        vp.push_back({x, y});
    }
    for (int i = 0; i < n; i++) {
        double x1 = vp[i].first;
        double y1 = vp[i].second;
        for (int j = i + 1; j < n; j++) {
            double x2 = vp[j].first;
            double y2 = vp[j].second;

            double dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
            E.push_back({dist, i + 1, j + 1});
            // cout << dist << " " << i+1 << " " << j+1 << "\n";
        }
    }
    for (int i = 1; i <= n; i++)P[i] = i;
    ans = Kruskal();
    cout << fixed;
    cout.precision(2);
    cout << ans << '\n';
}
