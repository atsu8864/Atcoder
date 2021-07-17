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
    ll n, a, x, y;
    cin >> n >> a >> x >> y;
    ll ans = 0;
    rep(i, n){
        if((i+1) <= a){
            ans += x;
        }else{
            ans += y;
        }
    }
    cout << ans << endl;

    return 0;
}
