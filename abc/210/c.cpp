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
    ll n, k;
    cin >> n >> k;
    set<ll> s;
    queue<ll> que;
    map<ll, ll> m;
    rep(i, k){
        ll c;
        cin >> c;
        if(m.count(c)){
            ll t = m[c];
            m[c] = t+1;
        }else{
            m[c] = 1;
        }
        s.insert(c);
        que.push(c);
    }
    ll b = s.size();
    ll result = b;
    rep(i, n-k) {
        ll c;
        cin >> c;
        que.push(c);
        if (m.count(c) && m[c] != 0) {
            ll t = m[c];
            m[c] = t + 1;
        } else {
            m[c] = 1;
            b++;
        }
        ll q = que.front();
        que.pop();
        ll tt = m[q];
        m[q] = tt - 1;
        if (m[q] == 0) {
            b--;
        }
        result = max(result, b);
    }
    cout << result << endl;
    return 0;
}
