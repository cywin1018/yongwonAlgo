#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

vector<int> v;

void measure(int n) {
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            v.push_back(i);
            if (n / i != i)v.push_back(n / i);
        }
    }
}

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
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1;
        return 0;
    }
    if (n % 2) {
        cout << -1;
    } else {
        measure(n);
        sort(v.begin(), v.end());
        // for (auto iter: v) {
        //     cout << iter << " ";
        // }

        for (auto x: v) {
            if (x * phi(x) == n) {
                cout << x;
                return 0;
            }
        }
        cout << -1;
    }
}
