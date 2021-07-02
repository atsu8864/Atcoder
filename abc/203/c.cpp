#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace  atcoder;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;


int main() {
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>>  p;
    rep(i, n){
        ll a, b;
        cin >> a >> b;
        p.push_back(make_pair(a, b));
    }
    sort(p.begin(), p.end());
    rep(i, n){
        ll a = p[i].first;
        ll b = p[i].second;
        if(a <= k){
            k += b;
        }
    }
    cout << k << endl;

    return 0;
}