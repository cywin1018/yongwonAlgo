#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
constexpr int SZ = 1 << 17;
using namespace std;

int N, Q, A[SZ], T[SZ << 1];

int minIndex(int a, int b) {
    if (a == 1e9)return b;
    if (b == 1e9)return a;
    return A[a] <= A[b] ? a : b;
}

int Init(int node = 1, int s = 1, int e = N) {
    if (s == e) {
        return T[node] = s;
    }
    int m = (s + e) / 2;
    // Init(node * 2, s, m);
    // Init(node * 2 + 1, m + 1, e);
    return T[node] = minIndex(Init(node * 2, s, m), Init(node * 2 + 1, m + 1, e));
}

int Update(int x, int v, int node = 1, int s = 1, int e = N) {
    if (s > x || e < x) return T[node];
    if (s == e) {
        return T[node];
    }
    int m = (s + e) / 2;
    return T[node] = minIndex(Update(x, v, node * 2, s, m), Update(x, v, node * 2 + 1, m + 1, e));
}

int Query(int l, int r, int node = 1, int s = 1, int e = N) {
    if (r < s || e < l)return 1e9;
    if (l <= s && e <= r) return T[node];
    int m = (s + e) / 2;
    return minIndex(Query(l, r, node * 2, s, m), Query(l, r, node * 2 + 1, m + 1, e));
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> A[i];
    Init();
    cin >> Q;
    while (Q--) {
        int num, a, b;
        cin >> num >> a >> b;
        if (num == 1) {
            A[a] = b;
            Update(a, b);
        } else if (num == 2) {
            cout << Query(a, b) << '\n';
        }
    }
}
