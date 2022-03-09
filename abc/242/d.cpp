#include <vector>
#include<iostream>
#include<math.h>
using namespace std;
#define rep(i, n) for (long long i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;



int main() {
    string s;
    cin >> s;
    int q;
    cin >> q;
    rep(i, q){
        ll t, k;
        cin >> t >> k;
        --k;
        int si = 0;
        if(t <= 60){
            ll b = 1ll<< t;
            si = k/b;
            k %= b;
        }
        ll r = __builtin_popcountll(k);
        ll l = t - r;
        ll x = l + r*2 + (s[si] - 'A');
        char ans = 'A' + (x%3);
        cout << ans << endl;

    }
    return 0;
}
