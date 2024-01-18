#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000007
const ll INF = 10e12 + 10;
using namespace std;

map<ll,ll> mp;
ll fibo(ll x) {
    if (mp[x])return mp[x];
    ll res;
    if (x % 2)
        res = ((fibo((x + 1) / 2) * fibo((x + 1) / 2)) % MOD) + (
                  (fibo((x - 1) / 2) * fibo((x - 1) / 2)) % MOD) % MOD;
    else res = (fibo(x / 2) * (fibo(x / 2 + 1) + fibo(x / 2 - 1))) % MOD;

    return mp[x] = res % MOD;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    ll n;
    cin >> n;
    mp[0] = 0, mp[1] = 1, mp[2] = 1;
    cout << fibo(n);
}
