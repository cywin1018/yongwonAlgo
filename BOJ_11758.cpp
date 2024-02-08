#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    int ccw = (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
    if (ccw > 0)
        cout << 1;
    else if (ccw < 0)
        cout << -1;
    else
        cout << 0;
}
