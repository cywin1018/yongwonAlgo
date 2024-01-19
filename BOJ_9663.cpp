#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;


int queen[16];
int n, cnt = 0;

bool checked(int m) {
    for (int i = 0; i < m; i++) {
        if (queen[m] == queen[i] || m - i == abs(queen[m] - queen[i]))
            return false;
    }
    return true;
}

void nQueen(int m) {
    if (m == n) {
        cnt++;
        return;
    }
    for (int i = 0; i < n; i++) {
        queen[m] = i;
        if (checked(m))
            nQueen(m + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    cin >> n;
    nQueen(0);
    cout << cnt;
}
