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
    vector<vector<int>> s(n);
    s[0].push_back(1);
    rep(i, n){
        if(!i) continue;
        std::copy(s[i-1].begin(),s[i-1].end(),std::back_inserter(s[i]));
        s[i].push_back(i+1);
        std::copy(s[i-1].begin(),s[i-1].end(),std::back_inserter(s[i]));

    }
    rep(i, s[n-1].size()){
        cout << s[n-1][i] << " ";
    }
    return 0;
}
