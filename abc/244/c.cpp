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
    int n;
    cin >> n;
    set<int> ans;
    rep(i, 2*n + 2){
        if(!i) continue;
        ans.insert(i);
    }
    rep(i, 2*n+1){
        auto a = ans.begin();
        cout << *a << endl << flush;
        ans.erase(*a);

        int t;
        cin >> t;
        if(t == 0) break;
        ans.erase(t);
    }

    return 0;
}
