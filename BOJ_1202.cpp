#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

int Bag[303030];
priority_queue<int> pq;
vector<pii > jew;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int m, v;
        cin >> m >> v;
        jew.push_back({m, v});
    }
    sort(jew.begin(), jew.end());

    for (int i = 0; i < k; i++) {
        cin >> Bag[i];
    }
    sort(Bag, Bag + k);
    int idx = 0;
    ll ans = 0;
    for (int i = 0; i < k; i++) {
        while (jew[idx].first <= Bag[i] && idx < n) {
            // cout << jew[idx].second << " ";
            pq.push(jew[idx].second);
            idx++;
        }


        if (!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }
    }
    cout << ans;
}
