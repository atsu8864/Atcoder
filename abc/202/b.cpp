#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace  atcoder;
#define rep(i, n) for (long long i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;


int main() {
    string s;
    cin >> s;
    string ans = "";
    rep(i, s.size()){
        ans += s[s.size() - i - 1];
    }
    rep(i, s.size()){
        if(ans[i] == '0') continue;
        if(ans[i] == '8') continue;
        if(ans[i] == '1') continue;
        if(ans[i] == '6') ans[i] = '9';
        else if(ans[i] == '9') ans[i] = '6';
    }
    cout << ans << endl;

    return 0;
}
