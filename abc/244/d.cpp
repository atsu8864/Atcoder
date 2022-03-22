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
    vector<char> s(3);
    vector<char> t(3);
    rep(i, 3){
        cin >> s[i];
    }
    rep(i, 3){
        cin >> t[i];
    }
    bool ok = false;
    int e = 0;
    rep(i, 3){
        if(s[i] == t[i]) e++;
    }
    if(e == 3 || e == 0) ok = true;
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
