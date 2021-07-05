#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace  atcoder;
#define rep(i, n) for (long long i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;

int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mi = 101001001;
    ll ans = 1001001001;
    rep(i, n) {
        cin >> a[i];
        ll tmp = 0;
        if(a[i] % 2 == 1) ans = 0;
        while(a[i] % 2 == 0){
            a[i] /= 2;
            tmp++;
        }
        ans = min(ans, tmp);
    }

    cout << ans << endl;


    return 0;
}