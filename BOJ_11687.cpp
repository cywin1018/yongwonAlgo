#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;


int bSearch(int m) {
    int cnt = 0;
    while (m) {
        cnt += m / 5;
        m /= 5;
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int m;
    cin >> m;
    int l = 0, r = 5e9 + 1, ans;
    while (l + 1 < r) {
        int mid = (l + r) / 2;

        if (bSearch(mid) < m) {
            l = mid;
        } else {
            r = mid;
        }
    }

    cout << (bSearch(r) == m ? r : -1) << '\n';
}
