//#include <bits/stdc++.h>
#include <vector>
#include<iostream>
#include<math.h>
using namespace std;
#define rep(i, n) for (long long i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;


int main() {
    ll n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    ll u = 0;
    for(ll i = s.size()-1; i >= 0; --i){
        if(s[i] == 'U'){
            ++u;
        }else if(u > 0){
            s[i] = 'n';
            --u;
        }
    }
    ll n_count = 0;
    rep(i, n){
        if(s[i] == 'n'){
            ++n_count;
            continue;
        }else if(n_count > 0){
            --n_count;
            continue;
        }else if(s[i] == 'U'){
            x /= 2;
        }else if(s[i] == 'R'){
            x = x*2 + 1;
        }else{
            x *= 2;
        }
    }
    cout << x << endl;
    return 0;
}
