//#include <bits/stdc++.h>
#include <vector>
#include<iostream>
#include<math.h>
#include<algorithm>
#include <deque>

using namespace std;
#define rep(i, n) for (long long i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;

ll a(deque<pair<ll, ll>>& d, ll c){
    long long ans = 0;
    ll first = d.front().first;
    ll second = d.front().second;
    if(second > c){
        ans += first * c;
        d.pop_front();
        d.push_front(make_pair(first, second-c));
    }else{
        ans += first * second;
        c -= second;
        d.pop_front();

        if(c > 0) ans += a(d, c);
    }
    return ans;
}

int main() {
    int q;
    cin >> q;
    deque<pair<ll, ll>> deque1;
    rep(i, q){
        ll t;
        cin >> t;
        if(t == 1){
            ll x, c;
            cin >> x >> c;
            deque1.push_back(make_pair(x, c));
        }else{
            ll c;
            cin >> c;

            ll ans = a(deque1, c);
            cout << ans << endl;

        }
    }

    return 0;
}
