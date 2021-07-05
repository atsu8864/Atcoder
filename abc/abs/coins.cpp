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
    int a, b, c;
    cin >> a >> b >> c;
    int x;
    cin >> x;
    int ans = 0;
    rep(i, a+1){
        rep(j, b+1){
            rep(k, c+1){
                if((i) * 500 + (j) * 100 + (k) * 50 == x){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}