#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;


vector<int> A;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        A.push_back(num);
    }

    sort(A.begin(), A.end(), greater<>());

    int mx = A[0] + 1, cnt = 0;
    for (int i = 1; i < n; i++) {
        if (A[i] + n >= mx) {
            cnt++;
        }
        mx = max(mx, A[i] + i + 1);
    }
    cout << cnt + 1 << '\n';
}
