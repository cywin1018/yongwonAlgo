#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
// #define MOD 1e9+7
const ll INF = 10e12 + 10;
using namespace std;

vector<pii > vp;
ll MOD = 1e9 + 7;

bool compare(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;
}

ll Pow(ll n) {
    ll res = 1, b = 2;
    while (n) {
        if (n & 1) res = res * b % MOD;
        b = b * b % MOD;
        n /= 2;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    ll c, k;
    ll ans = 0;
    while (n--) {
        cin >> c >> k;
        ans = (ans + ((c * k) % MOD) * Pow(k - 1) % MOD) % MOD;
    }

    cout << ans;
}
