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
    int n,m;string s; cin>>n;cin>>m;cin>>s;
    int cnt,ans=0;
    for(int i=0;i<m;i++){
        cnt=0;
//        cout << i << " ";
        if(s[i]=='I'){
           while(s[i+1]=='O'&&s[i+2]=='I'){
               cnt++;
               if(cnt==n){
                   ans++;
                   cnt--;
               }
               i+=2;
           }
        }
    }
    cout << ans;

}