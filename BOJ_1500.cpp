#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;


int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    ll ans = 1, s, k;
    cin >> s >> k;
    ll q = s / k;
    ll r = s % k;
    for (int i = 0; i < r; i++) {
        ans *= (q + 1);
    }
    for (int i = 0; i < k - r; i++) {
        ans *= q;
    }
    cout << ans;
}
