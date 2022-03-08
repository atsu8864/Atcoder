#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace  atcoder;
#define rep(i, n) for (long long i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;


int main() {

    int a, b, c, x;
    cin >> a >> b >> c >> x;
    if(a >= x){
        cout << 1 << endl;
        return 0;
    }else{
        printf("%.10f", (b-a)/c);
    }
    return 0;
}
