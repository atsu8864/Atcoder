#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace  atcoder;
#define rep(i, n) for (long long i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;

bool compare_by_b(pair<ll, ll> a, pair<ll, ll> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main() {
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> a(n);
    rep(i, n) {
        ll c;
        cin >> c;
        a[i] = make_pair(i, c);
    }
    sort(a.begin(), a.end(), compare_by_b);
    ll w = k/n;
    k %= n;
    vector<ll> ans(n, w);
    rep(i, k){
        ans[a[i].first] += 1;
    }
    rep(i, n){
        cout << ans[i] << endl;
    }

    return 0;
}
