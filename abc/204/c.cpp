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
    int n, m;
    cin >> n >> m;
    vector<int> g[2010];
    rep(i, m){
        int a, b;
        cin >> a >> b;
        --a;--b;
        g[a].push_back(b);
    }
    int ans = 0;
    rep(i, n){
        queue<int> que;
        set<int> vis;

        que.push(i);
        vis.insert(i);
        while(!que.empty()){
            int cu = que.front();
            que.pop();
            for(int j : g[cu]){
                if(!vis.count(j)){
                    que.push(j);
                    vis.insert(j);
                }
            }
        }
        ans += vis.size();
    }
    cout << ans << endl;
    return 0;
}
