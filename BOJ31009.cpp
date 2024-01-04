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
    ll n,jCost; cin >> n;
    vector<pair<string,ll>>v;
    for(int i=0;i<n;i++){
        string str;ll num; cin >> str >> num;
        if(str=="jinju"){
            cout << num << '\n';
            jCost = num;
        }
        v.push_back({str,num});
    }
    ll cnt=0;
    for(int i=0;i<n;i++){
        if(v[i].second>jCost)
            cnt++;
    }
    cout << cnt << '\n';
}