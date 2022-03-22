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
    vector<int> x_i = {1, 0, -1, 0};
    vector<int> y_i = {0, -1, 0, 1};
    cin >> n;
    string t;
    cin >> t;
    int x = 0;
    int y = 0;
    int cnt = 0;
    rep(i, t.size()){
        char c = t[i];
        if(c == 'S'){
            x += x_i[cnt%4];
            y += y_i[cnt%4];
        }else{
            cnt++;
        }
    }
    cout << x << " " << y << endl;

    return 0;
}
