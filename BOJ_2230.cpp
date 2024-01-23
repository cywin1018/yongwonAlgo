#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

int A[101010];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    sort(A, A + n);
    int l = 0, r = 1, ans = 1000000000;
    while (l < n) {
        if (A[r] - A[l] < m) {
            r++;

        }
        if (A[r] -A[l]==m) {
            cout << m;
            return 0;
        }
        ans = min(ans, A[r] - A[l]);
        l++;
    }
    cout << ans;
}
