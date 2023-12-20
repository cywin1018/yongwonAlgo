#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12+10;
using namespace std;

map<ll,ll>mp;

ll solved(ll n,ll p,ll q){
    if(mp.count(n))return mp[n];

    return mp[n] = solved(n/p,p,q) + solved(n/q,p,q);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    ll n,p,q; cin >> n >> p >> q;
    mp.insert({0,1});
    cout << solved(n,p,q) << '\n';

}