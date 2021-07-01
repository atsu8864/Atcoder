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
    ll n, L;
    cin >> n >> L;
    ll k;
    cin >> k;
    vector<ll> a(n+1, 0);
    rep(i, n) cin >> a[i];
    ll l = 0, r = L;
    ll ans = 0;
    while(l <= r){
        ll c = (l + r) / 2;
        ll kut = k;
        int pre = 0;
        rep(i, n){
            if(a[i] - pre >= c && L - a[i] >= c){
                kut -= 1;
                pre = a[i];
            }
        }
        if(kut <= 0){
            ans = c;
            l = c+1;
        }else{
            r = c-1;
        }
    }

    cout << ans << endl;

    return 0;
}