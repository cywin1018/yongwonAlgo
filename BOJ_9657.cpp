#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12+10;
using namespace std;

int dp[1010];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n; cin >> n;
    dp[1]=dp[3]=dp[4]=dp[5]=1;
    for(int i=6;i<=n;i++){
        if(!dp[i-1]||!dp[i-3]||!dp[i-4])
            dp[i]=1;
    }
    if (dp[n]) cout << "SK\n";
    else cout << "CY\n";
}