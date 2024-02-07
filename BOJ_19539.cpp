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
    int n, sum = 0, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
        sum += A[i];
        cnt += A[i] / 2;
    }
    if (sum % 3 || cnt < sum / 3) {
        cout << "NO" << '\n';
    } else {
        cout << "YES" << '\n';
    }
}
