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
    int n;
    cin >> n;
    vector<double> l(n);
    vector<double> r(n);
    rep(i, n){
        int t;
        cin >> t >> l[i] >> r[i];
        if(t == 2){
            r[i] -= 0.5;
        }else if(t == 3){
            l[i] += 0.5;
        }else if(t == 4){
            r[i] -= 0.5;
            l[i] += 0.5;
        }
    }
    int ans = 0;
    rep(i, n) {
        for (int j = i + 1; j < n; ++j) {
            ans += (max(l[i], l[j]) <= min(r[i], r[j]));
        }
    }
    cout << ans << endl;

    return 0;
}
