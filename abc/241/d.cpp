//#include <bits/stdc++.h>
#include <vector>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<set>
using namespace std;
#define rep(i, n) for (long long i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;



int main() {
    int q;
    cin >> q;
    multiset<ll> a;
    rep(i, q){
        int c;
        cin >> c;
        if(c == 1){
            ll x, k;
            cin >> x;
            a.insert(x);
        }else if(c == 2){
            ll x, k;
            cin >> x >> k;
            auto itr = a.upper_bound(x);
            bool ok = true;
            rep(j, k) {
                if(itr == a.begin()) {
                    ok = false;
                    break;
                }
                --itr;
            }
            if(!ok) cout << -1 << endl;
            else cout << *itr << endl;

        }else{
            ll x, k;
            cin >> x >> k;
            auto itr = a.lower_bound(x);
            bool ok = true;
            rep(j, k-1) {
                if(itr == a.end()) {
                    ok = false;
                    break;
                }
                ++itr;
            }
            if(!ok || itr == a.end()) cout << -1 << endl;
            else cout << *itr << endl;

        }
    }

    return 0;
}
