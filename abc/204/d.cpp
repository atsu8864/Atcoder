#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace  atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;


int main() {
    int n;
    cin >> n;
    bitset<100001> dp;
    int tot = 0;
    dp[0] = 1;
    rep(i, n){
        int t;
        cin >> t;
        dp |= dp << t;
        tot += t;
    }
    int ans = tot;
    rep(i, tot+1){
        if(dp[i]){
            ans = min(ans, max(i, tot-i));
        }
    }
    cout << ans << endl;
    return 0;
}
