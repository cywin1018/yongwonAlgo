#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12+10;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n,m,b,w=0,ans=0; cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> b;
        if(b+w>m){
            w=b;
            ans++;
        }else{
            w+=b;
        }
    }
    if(w)
        ans++;
    cout << ans;
}