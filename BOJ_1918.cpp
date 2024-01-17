#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;


stack<char> s;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    string str, ans = "";
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        if (isalpha(str[i])) {
            ans += str[i];
        } else if (str[i] == '(') {
            s.push(str[i]);
        } else if (str[i] == '*' || str[i] == '/') {
            while (!s.empty() && (s.top() == '*' || s.top() == '/')) {
                ans += s.top();
                s.pop();
            }
            s.push(str[i]);
        } else if (str[i] == '+' || str[i] == '-') {
            while(!s.empty() && s.top() != '(') {
                ans += s.top(); s.pop();
            }

            s.push(str[i]);
        } else if (str[i] == ')') {
            while (!s.empty() && s.top() != '(') {
                ans += s.top();
                s.pop();
            }
            s.pop();
        }
    }

    while (!s.empty()) {
        ans += s.top();

        s.pop();
    }
    cout << ans;
}
