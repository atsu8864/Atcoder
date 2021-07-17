#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace  atcoder;
#define rep(i, n) for (long long i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const long double PI = (acos(-1));
const int MOD = 1e9+7;

int main(void){
    int n;
    cin >> n;
    int c_f, c_b;
    cin >> c_f >> c_b;
    string s;
    cin >> s;
    vector<int> ans;
    int cost = 1001001001;
    if(n % 2 == 1){
        vector<int> v(n-1);
        iota(v.begin(), v.end(), 1);       // v に 1, 2, ... N を設定
        do {
            string t = s;
            bool flag = true;
            for(auto x : v) {
                if (t[x - 1] == 'd') {
                    flag = false;
                    continue;
                }
                for(int i = x; i < s.length();++i){
                    if(t[i] == 's'){
                        t[i] = 'd';
                    }else{
                        t[i] = 's';
                    }
                }
            }
            if(t[n-1] == 's' && flag) {
                int ba = n;
                int n_cost = 0;
                for(auto x : v) {
                    if (x < ba) {
                        n_cost += c_b;
                    } else {
                        n_cost += c_f;
                    }
                    ba = x;
                }
                if(cost > n_cost){
                    cost = n_cost;
                    ans = {};
                    ans.push_back(n);
                    for(auto x : v){
                        ans.push_back(x);
                    }
                    ans.push_back(n);
                }
            }
        } while( next_permutation(v.begin(), v.end()) );     // 次の順列を生成
        for(int i : ans){
            cout << i << " ";
        }
        cout << endl;
    }else{
        vector<int> v(n);
        iota(v.begin(), v.end(), 1);       // v に 1, 2, ... N を設定
        do {
            string t = s;
            bool flag = true;
            rep(i, n-1){
                for(auto x : v) {
                    if(x == n) x = i + 1;
                    if (t[x - 1] == 'd') {
                        flag = false;
                        continue;
                    }
                    for(int i = x; i < s.length();++i){
                        if(t[i] == 's'){
                            t[i] = 'd';
                        }else{
                            t[i] = 's';
                        }
                    }
                }
                if(t[n-1] == 's' && flag) {
                    int ba = n;
                    int n_cost = 0;
                    for(auto x : v) {
                        if(x == n) x = i + 1;
                        if (x < ba) {
                            n_cost += c_b;
                        } else {
                            n_cost += c_f;
                        }
                        ba = x;
                    }
                    if(cost > n_cost){
                        cost = n_cost;
                        ans = {};
                        ans.push_back(n);
                        for(auto x : v){
                            if(x == n) x = i + 1;
                            ans.push_back(x);
                        }
                        ans.push_back(n);
                    }
                }
            }
        } while( next_permutation(v.begin(), v.end()) );     // 次の順列を生成
        for(int i : ans){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}