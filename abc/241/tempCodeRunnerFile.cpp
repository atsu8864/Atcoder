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
    int n;
    cin >> n;
    vector<string> s(n);
    bool ok = false;
    rep(i, n) cin >> s[i];
    rep(i, n){
        rep(j, n){
            int b = 0;
            rep(k, 6){
                if(s[i][j+k] == '#'){
                    ++b;
                }
            }
            if(b >= 4){
                ok = true;
            }
        }
    }
    rep(i, n){
        rep(j, n){
            int b = 0;
            rep(k, 6){
                if(s[i+k][j] == '#'){
                    ++b;
                }
            }
            if(b >= 4){
                ok = true;
            }
        }
    }
    rep(i, n){
        rep(j, n){
            int b = 0;
            rep(k, 6){
                if(s[i+k][j+k] == '#'){
                    ++b;
                }
            }
            if(b >= 4){
                ok = true;
            }
        }
    }
    rep(i, n){
        rep(j, n){
            int b = 0; 
            rep(k, 6){
                if(s[i-k][j-k] == '#'){
                    ++b;
                }
            }
            if(b >= 4){
                ok = true;
            }
        }
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
