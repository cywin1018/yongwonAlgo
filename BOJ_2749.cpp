#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000

const ll INF = 10e12 + 10;
using namespace std;

int F[MOD / 10 * 15];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int P = MOD / 10 * 15;
    ll n;
    cin >> n;
    F[1] = 1;
    for (int i = 2; i < P; i++) {
        F[i] = F[i - 1] + F[i - 2];
        F[i] %= MOD;
    }
    cout << F[n % P];
}
