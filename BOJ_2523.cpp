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
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = N - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}
