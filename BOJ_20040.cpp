#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

int P[505050];

void Init(int n) {
    for (int i = 0; i < n; i++)P[i] = i;
}

int Find(int v) {
    if (v == P[v])return v;
    return P[v] = Find(P[v]);
}

bool Union(int u, int v) {
    u = Find(u);
    v = Find(v);
    if (u == v)
        return true;
    if (u != v)P[u] = v;
    return false;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, m;
    bool flag = false;
    cin >> n >> m;
    Init(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        flag = Union(a, b);
        if (flag) {
            cout << i + 1 << '\n';
            return 0;
        }
    }
    cout << 0 << '\n';
}
