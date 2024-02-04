#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

int phi(int n) {
    int ans = n;
    for (int k = 2; k <= sqrt(n); k++) {
        if (n % k == 0) {
            ans -= ans / k;
            while (n % k == 0) n /= k;
        }
    }
    if (n > 1)ans -= ans / n;
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, sum = 0;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        sum += phi(i);
    }
    cout << sum << '\n';
}
