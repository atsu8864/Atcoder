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


int binary_search(int key, vector<int> a) {
    int left = 0, right = (int)a.size() - 1; // 配列 a の左端と右端
    while (right >= left) {
        int mid = left + (right - left) / 2; // 区間の真ん中
        if (a[mid] == key) return mid;
        else if (a[mid] > key) right = mid - 1;
        else if (a[mid] < key) left = mid + 1;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    string s;

    rep(i, n){
        cin >> x[i] >> y[i];
    }
    cin >> s;

    vector<pair<int, int>> r, l;
    vector<int> l_y;
    rep(i, n){
        if(s[i] == 'R'){
            r.push_back(make_pair(y[i], x[i]));
        }else if(s[i] == 'L'){
            l.push_back(make_pair(y[i], x[i]));
            l_y.push_back(y[i]);
        }
    }
    if(r.empty()){
        cout << "No" << endl;
        return 0;
    }else if(l.empty()){
        cout << "No" << endl;
        return 0;
    }
    sort(r.begin(), r.end());
    sort(l.begin(), l.end());
    sort(l_y.begin(), l_y.end());



    int curr = r[0].first;
    rep(i, r.size()){
        int r_i = r[i].first;
        if(curr == r_i && i) continue;
        auto j_l = lower_bound(l_y.begin(), l_y.end(), r_i);
        auto j_u = upper_bound(l_y.begin(), l_y.end(), r_i);


        int c = j_u - j_l;
        int j = j_l - l_y.begin();
        if(c == 0) continue;
        else{
            if(r[i].second < l[j+c-1].second){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;


    return 0;
}
