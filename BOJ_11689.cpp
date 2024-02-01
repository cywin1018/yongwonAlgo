#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    ll n;
    cin >> n;
    ll ans = n;
    for (ll k = 2; k <= sqrt(n); k++) {
        if (n % k == 0) {
            ans = ans - ans / k;
            while (n % k == 0)n /= k;
        }
    }
    if (n > 1)ans -= ans / n;
    cout << ans;
}
