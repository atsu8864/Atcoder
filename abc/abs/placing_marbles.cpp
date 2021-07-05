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
    string s;
    cin >> s;
    int ans = 0;
    rep(i, 3){
        if(s[i] == '1'){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}