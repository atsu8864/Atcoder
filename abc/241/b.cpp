//#include <bits/stdc++.h>
#include <vector>
#include<iostream>
#include<math.h>
#include <algorithm>

using namespace std;
#define rep(i, n) for (long long i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;


int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    vector<bool> eated(n);
    rep(i, n){
        cin >> a[i];
    }

    rep(i, m){
        bool ok = false;    
        int t;
        cin >> t;
        rep(j, n){
            if(a[j] == t && !eated[j]){
                eated[j] = true;
                ok = true;
                break;
            }
        }
        if(!ok) {
            cout << "No" << endl;
            return 0;
        }

    }
    cout << "Yes" << endl;

    return 0;
}
