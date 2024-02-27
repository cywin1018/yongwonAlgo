#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;


int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    ll ans = 0;
    if (n % 2) {
        ans = v[n - 1];
        n--;
    }

    for (int i = 0; i < n / 2; i++) {
        ll m = v[i] + v[(n - 1) - i];
        if (m > ans) ans = m;
    }
    cout << ans << '\n';
}
