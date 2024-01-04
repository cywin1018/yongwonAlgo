#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12+10;
using namespace std;
ll v[1001];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n,jCost; cin >> n;
    ll cnt=0;

    for(int i=0;i<n;i++){
        string str;ll num; cin >> str >> num;
        if(str=="jinju"){
            cout << num << '\n';
            jCost = num;
        }
        if(num>1000)
            cnt++;
        else{
            v[num]++;
        }
    }

    for(int i=0;i<1001;i++){
        if(i>jCost)
            cnt+=v[i];
    }
    cout << cnt << '\n';
}