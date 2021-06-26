#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace  atcoder;
using ll = long long;
typedef pair<int,int> P;

const int INF = 1001001001;
const long double PI = (acos(-1));
const int MOD = 1e9+7;
const int vx[4] = {0,1,0,-1};
const int vy[4] = {1,0,-1,0};


int main() {
    vector<int> a(3);
    for (int i = 0; i < 3; ++i){
        cin >> a[i];
    }
    sort(a.begin(), a.end());


    int ans = a[2] + a[1];
    cout << ans << endl;


    return 0;
}
