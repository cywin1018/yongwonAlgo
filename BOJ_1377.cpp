#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

pii A[505050];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i].first;
        A[i].second = i;
    }
    stable_sort(A, A + n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cout << A[i].second << " ";
        // cout << A[i].second - i << " ";
        ans = max(ans, abs(A[i].second - i));
    }
    // cout << ans + 1;
}
