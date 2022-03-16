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
    vector<int> a(10);
    rep(i, 10){
        cin >> a[i];
    }
    int t = a[0];
    rep(i, 2){
        t = a[t];
    }
    cout << t << endl;

    return 0;
}
