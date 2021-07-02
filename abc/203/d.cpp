#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace  atcoder;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;

int main(){
    int n, k;
    cin >> n >> k;
    int L = k*k/2 + 1;
    vector a(n, vector<int> (n));
    rep(i, n)rep(j, n) cin >> a[i][j];
    int l = -1, r = 1001001001;
    while(l+1 < r){
        int w = (l+r)/2;
        bool ok = false;
        vector s(n+1, vector<int> (n+1, 0));
        rep(i,n)rep(j,n) s[i+1][j+1] = a[i][j] > w;
        rep(i,n+1)rep(j,n) s[i][j+1] += s[i][j];
        rep(i,n)rep(j,n+1) s[i+1][j] += s[i][j];
        rep(i, n-k+1)rep(j, n-k+1){
            int sum = s[i+k][j+k];
            sum -= s[i][j+k];
            sum -= s[i+k][j];
            sum += s[i][j];
            if(sum < L) ok = true;
        }
        if(ok) r = w; else l = w;
    }
    cout << r << endl;
    return 0;
}