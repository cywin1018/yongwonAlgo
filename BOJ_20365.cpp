#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

char A[505050];


int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> A[i];
    int a = 1, b = 0;
    char cur = A[1];
    bool changed = false;
    for (int i = 2; i <= n; i++) {
        if (A[i] != cur && !changed) {
            b++;
            cur = A[i];
            changed = true;
        } else if (A[i] != cur && changed) {
            a++;
            cur = A[i];
            changed = false;
        }
    }
    cout << min(a, b) + 1;
}
