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
    int x, y;
    cin >> x >> y;
    int ans = 3 - x - y;
    if(x == y){
        ans = x;
    }
    cout << ans << endl;

    return 0;
}
