#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;
int Prime[1010101];

int IsPrime(int n) {
    if (n == 2)return 1;
    if (n <= 1 || n % 2 == 0)return 0;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)return 0;
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    if (n < 8) {
        cout << "-1" << '\n';
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (Prime[i])continue;
        for (int j = i * i; j <= n; j += i)
            Prime[j] = 1;
    }
    if (n % 2) {
        n -= 5;
        cout << "2 3 ";
    } else {
        n -= 4;
        cout << "2 2 ";
    }
    for (int i = 2; i <= n; i++) {
        if (!Prime[i] && !Prime[n - i]) {
            cout << i << " " << n - i;
            return 0;
        }
    }
}
