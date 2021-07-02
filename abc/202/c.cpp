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
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), c(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n) cin >> c[i];
    vector<int> sum(n+1);
    rep(i, n){
        sum[b[c[i]-1]]++;
    }
    ll ans = 0;
    rep(i, n){
        ans += sum[a[i]];
    }
    cout << ans << endl;


    return 0;
}
