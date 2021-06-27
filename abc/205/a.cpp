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
    int a, b;
    cin >> a >> b;
    double ans;
    ans = (a * b)/100.0;
    printf("%.10f", ans);

    return 0;
}
