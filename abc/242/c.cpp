#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (long long i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;


int main() {

    int n;
    cin >> n;
    int c = 998244353;
    vector<vector<int> > dp(9, vector<int> (1000001));
    rep(i, 9) dp[i][0] = 1;
    int j = 0;
    while(1){
        rep(i, 9) {
            if(i > 0 && i < 8) {
                dp[i][j+1] = (dp[i+1][j]%c + dp[i-1][j]%c)%c + dp[i][j]%c;
                dp[i][j+1] %= c;
            }else if(i == 0){
                dp[i][j+1] = dp[i][j]%c + dp[i+1][j]%c;
                dp[i][j+1] %= c;
            }else{
                dp[i][j+1] = dp[i][j]%c + dp[i-1][j]%c;
                dp[i][j+1] %= c;
            }
        }
        ++j;
        if(j == n) break;
    }
    ll ans = 0;
    rep(i, 9){
        ans += dp[i][n-1]%c;
        ans %= c;
    }
    cout << ans << endl;


    return 0;
}
