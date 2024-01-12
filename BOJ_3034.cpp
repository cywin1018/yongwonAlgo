#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    double n, w, h, s;
    cin >> n >> w >> h;
    while (n--) {
        cin >> s;
        if (s <= w || s <= h || s <= sqrt(w * w + h * h)) {
            cout << "DA" << '\n';
        } else
            cout << "NE" << '\n';
    }
}
