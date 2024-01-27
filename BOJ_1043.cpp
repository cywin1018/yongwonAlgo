#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;
vector<int> pp[51], party[51], tp;
bool visited[51];

void dfs(int n) {
    visited[n] = true;
    for (auto ptn: pp[n]) {
        for (auto p: party[ptn]) {
            if (!visited[p]) dfs(p);
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    int t, v;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> v;
        tp.push_back(v);
    }
    for (int i = 1; i <= M; i++) {
        cin >> t;
        for (int j = 0; j < t; j++) {
            cin >> v;
            party[i].push_back(v);
            pp[v].push_back(i);
        }
    }

    for (auto a: tp) dfs(a);
    int ans = 0;
    for (int i = 1; i <= M; i++) {
        bool flag = true;
        for (auto p: party[i]) {
            if (visited[p]) {
                flag = 0;
                break;
            }
        }
        if (flag) ans++;
    }
    cout << ans;
}
