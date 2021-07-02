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
    int n, k;
    cin >> n >> k;
    int sum = 0;
    rep(i, n){
        rep(j, k){
            int a = (i + 1) * 100 + (j + 1);
            sum += a;
        }
    }
    cout << sum << endl;

    return 0;
}
