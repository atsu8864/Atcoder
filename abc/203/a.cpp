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
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b) cout << c << endl;
    else if(a == c) cout << b << endl;
    else if(b == c) cout << a << endl;
    else cout << 0 << endl;

    return 0;
}
