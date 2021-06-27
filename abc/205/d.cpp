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
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> c(n);
    rep(i, n){
        cin >> a[i];
        if(!i) c[i] = a[i] - 1;
        else{
            c[i] = a[i] - i - 1;
        }
    }
    rep(i, q){
        ll k;
        cin >> k;
        ll ans = 0;
        int iter = lower_bound(c.begin(), c.end(), k) - c.begin();
        cout << a[iter]-1 << endl;

    }


    return 0;
}
