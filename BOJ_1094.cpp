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
   int x; cin >> x;
   int ans=0;
   while(x>0){
       if(x%2)
           ans++;
       x/=2;
   }
   cout << ans;
}