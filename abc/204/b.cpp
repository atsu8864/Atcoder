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
    vector<int> a(n);
    int ans = 0;
    rep(i, n){
        cin >> a[i];
        if(a[i] > 10){
            ans += a[i] - 10;
        }
    }
    cout << ans << endl;

    return 0;
}
