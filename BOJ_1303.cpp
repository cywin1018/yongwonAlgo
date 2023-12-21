#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12+10;
using namespace std;

char bw[111][111];
bool vis[111][111];

int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
int n,m;
int cnt;
void DFS(int x,int y,char c){
    vis[x][y]=true;
    cnt++;
    for(int i=0;i<4;i++){
        int nx = x + dx[i],ny = y + dy[i];
        if(nx<0||ny<0||nx>=m||ny>=n)continue;
        if(vis[nx][ny]== false&&bw[nx][ny]==c)
            DFS(nx,ny,c);
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
     cin >> n >> m;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>bw[i][j];
        }
    }
    int sumB=0,sumW=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(!vis[i][j]){
                cnt=0;
                DFS(i,j,bw[i][j]);
                if(bw[i][j]=='B')
                    sumB += (cnt*cnt);
                else
                    sumW+=(cnt*cnt);
            }
        }
    }
    cout << sumW << " " << sumB << '\n';
}