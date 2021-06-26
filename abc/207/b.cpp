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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = c * d;
    sum -= b;
    int ans = 0;
    if(sum <= 0){
        cout << -1 << endl;
        return 0;
    }
    int r_sum = 0;
    while(r_sum < a){
        ans++;
        r_sum += sum;
    }
    cout << ans << endl;

    return 0;
}
