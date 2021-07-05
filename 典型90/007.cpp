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
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll q;
    cin >> q;
    rep(i, q){
        ll ans = 1001001001;
        ll b;
        cin >> b;
        int iter = lower_bound(a.begin(), a.end(), b) - a.begin();
        if(iter == 0) ans = abs(b - a[iter]);
        else ans = min(abs(b - a[iter]), abs(b - a[iter - 1]));
        cout << ans << endl;
    }


    return 0;
}