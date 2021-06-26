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
    int n;
    cin >> n;
    dsu d(200001);
    vector<int> a(n);
    set<int> s;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
        s.insert(a[i]);
    }
    for(int i = 0; i < n; ++i){
        d.merge(a[i], a[n-i-1]);
    }
    int ans = 0;
    for(int i = 0; i < 200001; ++i){
        if(i == d.leader(i)){
            ans += d.size(i) - 1;
        }
    }
    cout << ans << endl;



    return 0;
}
