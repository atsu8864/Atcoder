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
    int h, w, c;
    cin >> h >> w >> c;
    vector<vector<int>> G(h, vector<int> (w));
    rep(i, h){
        rep(j, w){
            cin >> G[i][j];
        }
    }
    ll ans = 1001001001;
    rep(i, h){
        rep(j, w){
            ll t = G[i][j];

        }
    }
    return 0;
}
