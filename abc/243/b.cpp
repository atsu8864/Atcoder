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
    int ans1 = 0;
    int ans2 = 0;
    vector<int> a(n), b(n);
    rep(i, n){
        cin >> a[i];
    }
    rep(i, n){
        cin >> b[i];
        if(a[i] == b[i]) ans1++;
    }
    rep(i, n){
        rep(j, n){
            if(i == j) continue;
            if(a[i] == b[j]){
                ans2++;
            }
        }
    }
    cout << ans1 << endl;
    cout << ans2 << endl;

    return 0;
}
