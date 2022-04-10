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
    int n;
    cin >> n;
    vector<string> s(n);
    vector<string> t(n);
    rep(i, n){
        cin >> s[i] >> t[i];
    }
    bool flag = true;
    bool m1 = true, n1 = true;

    rep(i, n){
        rep(j, n){
            if(i == j) continue;
            if(s[i] == s[j] || s[i] == t[j]){
                m1 = false;
            }
            if(t[i] == s[j] || t[i] == t[j]){
                n1 = false;
            }
        }

    }
    if(!m1 && !n1) flag = false;
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
