#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;
vector<ll> x;
vector<ll> y;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        int num1, num2;
        cin >> num1 >> num2;
        x.push_back(num1);
        y.push_back(num2);
    }
    x.push_back(x[0]);
    y.push_back(y[0]);
    for (int i = 0; i < n; i++) {
        sum1 += x[i] * y[i + 1];
        sum2 += y[i] * x[i + 1];
    }

    printf("%.1f", abs(sum1 - sum2) / 2.0);
}
