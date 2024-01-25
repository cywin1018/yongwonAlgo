#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

int Check[4040404];
vector<int> Primes;
int cnt[4040404];

void Sieve() {
    for (int i = 2; i <= 4000000; i++) {
        if (Check[i])continue;
        Primes.push_back(i);
        for (int j = i + i; j <= 4000000; j += i)
            Check[j] = 1;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    Sieve();
    // for (auto &i: Primes) {
    //     cout << i << '\n';
    // }
    for (int i = 0; i < Primes.size(); i++) {
        int sum = 0;
        for (int j = i; j < Primes.size(); j++) {
            sum += Primes[j];

            if (sum > 4000000) {
                break;
            } else {
                cnt[sum]++;
            }
        }
    }
    cout << cnt[n] << '\n';
}
