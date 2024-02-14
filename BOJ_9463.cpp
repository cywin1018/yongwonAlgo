#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
constexpr int SZ = 101010;
using namespace std;

int N, Q, A[SZ], B[SZ];
int T[SZ * 4];


void Update(int x, int node = 1, int s = 1, int e = N) {
    if (x < s || x > e)return;
    T[node]++;
    if (s < e) {
        int m = (s + e) / 2;
        Update(x, node * 2, s, m);
        Update(x, node * 2 + 1, m + 1, e);
    }
}


int Query(int l, int r, int node = 1, int s = 1, int e = N) {
    if (r < s || e < l)return 0;
    if (l <= s && e <= r) return T[node];
    int m = (s + e) / 2;
    return Query(l, r, node * 2, s, m) + Query(l, r, node * 2 + 1, m + 1, e);
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> N;
        memset(A, 0, sizeof(A));
        memset(B, 0, sizeof(B));
        memset(T, 0, sizeof(T));
        for (int i = 1; i <= N; i++)
            cin >> A[i];
        for (int i = 1; i <= N; i++) {
            int num;
            cin >> num;
            B[num] = i;
        }

        ll ans = 0;
        for (int i = 1; i <= N; i++) {
            ans += Query(B[A[i]] + 1, N);
            Update(B[A[i]]);
        }
        cout << ans << '\n';
    }
}

