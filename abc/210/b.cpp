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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    rep(i, s.size()){
        if(s[i] == '1') {
            if (i % 2 == 0) {
                cout <<  "Takahashi" << endl;
                return 0;
            } else {
                cout << "Aoki" << endl;
                return 0;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
