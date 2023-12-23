#include <bits/stdc++.h>

#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

vector<string> str;
int dist;
int ans = 1e9;
string str1, str2, str3,tmp;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            // string input here
            cin >> tmp;
            str.push_back(tmp);
        }
        if (n >= 33) {
            cout << "0" << '\n';
        } else {
            // 33이전에는 탐색한다.

            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    for (int k = j + 1; k < n; k++) {
                        str1 = str[i];
                        str2 = str[j];
                        str3 = str[k];
//                        cout << str1 << " " << str2 << " " << str3 << '\n';
                        for (int l = 0; l < 4; l++) {
                            dist += ((str1[l] != str2[l]) + (str2[l] != str3[l]) + (str3[l] != str1[l]));
                        }
                        ans = min(ans, dist);
                        dist=0;
//                        cout << ans << '\n';
                    }
                }
            }
            cout << ans << '\n';
        }
        while(!str.empty()){
            str.pop_back();
            ans = 1e9;
            dist=0;
        }
    }

}