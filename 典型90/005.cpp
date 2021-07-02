#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace  atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;

int main(){
    ll n, b, K;
    ll mod = 1000000007;
    cin >> n >> b >> K;
    ll c[11];
    rep(i, K) cin >> c[i];
    ll dp[10009][33];
    dp[0][0] = 1;
    rep(i, n){
        rep(j, b){
            rep(k, K){
                ll next = (10 * j + c[k]) % b;
                dp[i + 1][next] += dp[i][j];
                dp[i + 1][next] %= mod;
            }
        }
    }
    cout << dp[n][0] << endl;
    return 0;
}