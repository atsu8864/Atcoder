#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace  atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h+1, vector<int> (w+1));
    int sum_r = 0, sum_c = 0;
    rep(i, h){
        sum_r = 0;
        rep(j, w){
            cin >> a[i][j];
            sum_r += a[i][j];
        }
        a[i][w] = sum_r;
    }
    rep(i, w){
        sum_c = 0;
        rep(j, h){
            sum_c += a[j][i];
        }
        a[h][i] = sum_c;
    }
    vector<vector<int>> ans(h, vector<int> (w));
    rep(i, h){
        rep(j, w){
            ans[i][j] = a[i][w] + a[h][j] - a[i][j];
        }
    }
    rep(i, h){
        rep(j, w){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
