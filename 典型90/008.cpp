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
    int n;
    cin >> n;
    string a = "atcoder";
    string s;
    cin >> s;
    static int dp[100009][8];
    dp[0][0] = 1;
    rep(i, s.size()+1){
        rep(j, a.size()+1){
            if(a[j] == s[i]) dp[i+1][j+1] += dp[i][j];
            dp[i+1][j] += dp[i][j];
        }
        rep(j, a.size()+1) dp[i+1][j] %= MOD;
    }
    cout << dp[s.size()][7];
    return 0;
}