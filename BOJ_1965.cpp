#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12+10;
using namespace std;

int dp[1010];
int box[1010];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n; cin >> n;
    for(int i=1;i<=n;i++){
        cin >> box[i];
    }
    int  ans=0;
    for(int i=1;i<=n;i++){
        dp[i]=1;
        for(int j=1;j<i;j++){
            if(box[j]<box[i]&&dp[i]<dp[j]+1)
                dp[i]=dp[j]+1;
        }
        if( ans<dp[i])
            ans = dp[i];
    }
    cout << ans << '\n';
}