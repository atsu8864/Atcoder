//#include <bits/stdc++.h>
#include <vector>
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
#define rep(i, n) for (long long i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;


int main() {
    int n, m, k, s, t, x;
    cin >> n >> m >> k >> s >> t >> x;
    vector<int> graph(m);
    rep(i, m){
        int u, v;
        cin >> u >> v;
        graph[u] = v;
        graph[v] = u;
    }

    return 0;
}
