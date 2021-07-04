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
    ll p;
    cin >> p;
    vector<ll> n(10, 1);
    rep(i, 10){
        rep(j, i+1){
            n[i] *= j+1;
        }
    }
    ll ans = 0;
    rep(i, 10){
        ll j = 10-i-1;
        while(p >= n[j]){
            p -= n[j];
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
